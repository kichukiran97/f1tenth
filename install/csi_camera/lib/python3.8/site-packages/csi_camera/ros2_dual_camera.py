#!/usr/bin/python3

# based on https://github.com/JetsonHacksNano/CSI-Camera

import cv2
import threading
import numpy as np
import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage, Image
from builtin_interfaces.msg import Time
from cv_bridge import CvBridge

class CSI_Camera:

    def __init__(self):
        # Initialize instance variables
        # OpenCV video capture element
        self.video_capture = None
        # The last captured image from the camera
        self.frame = None
        self.grabbed = False
        # The thread where the video capture runs
        self.read_thread = None
        self.read_lock = threading.Lock()
        self.running = False

    def open(self, gstreamer_pipeline_string):
        try:
            self.video_capture = cv2.VideoCapture(
                gstreamer_pipeline_string, cv2.CAP_GSTREAMER
            )
            # Grab the first frame to start the video capturing
            self.grabbed, self.frame = self.video_capture.read()

        except RuntimeError:
            self.video_capture = None
            print("Unable to open camera")
            print("Pipeline: " + gstreamer_pipeline_string)


    def start(self):
        if self.running:
            print('Video capturing is already running')
            return None
        # create a thread to read the camera image
        if self.video_capture != None:
            self.running = True
            self.read_thread = threading.Thread(target=self.updateCamera)
            self.read_thread.start()
        return self

    def stop(self):
        self.running = False
        # Kill the thread
        if self.read_thread is not None:
            self.read_thread.join()
            self.read_thread = None

    def updateCamera(self):
        # This is the thread to read images from the camera
        while self.running:
            try:
                grabbed, frame = self.video_capture.read()
                with self.read_lock:
                    self.grabbed = grabbed
                    self.frame = frame
            except RuntimeError:
                print("Could not read image from camera")
        # FIX ME - stop and cleanup thread
        # Something bad happened

    def read(self):
        with self.read_lock:
            frame = self.frame.copy()
            grabbed = self.grabbed
        return grabbed, frame

    def release(self):
        if self.video_capture != None:
            self.video_capture.release()
            self.video_capture = None
        # Now kill the thread
        if self.read_thread != None:
            self.read_thread.join()


class CameraNode(Node):
    def __init__(self, **kwargs):
        super().__init__("stereocamera_node")
        left_image_topic_ = self.declare_parameter(
            "left_image_topic", "/image/left/image_compressed").value
        right_image_topic_ = self.declare_parameter(
            "right_image_topic", "/image/right/image_compressed").value
        #if not self.has_parameter("resolution_factor"):
        #    self.declare_parameter("resolution_factor",1.0)
        #if not self.has_parameter("fps"):
        #    self.declare_parameter("fps",10)
        self.exception_counter = 0
        self.resolution_factor = float(os.environ.get("CAMERA_RESOLUTION_FACTOR",0.75))#self.get_parameter('resolution_factor').value
        self.fps = int(os.environ.get("CAMERA_FPS", 12))#self.get_parameter('fps').value
        self.left_frame_id_ = self.declare_parameter("left_frame_id", "left_camera").value
        self.right_frame_id_ = self.declare_parameter("right_frame_id", "right_camera").value
        self.left_image_publisher_ = self.create_publisher(CompressedImage, left_image_topic_, 1)
        self.right_image_publisher_ = self.create_publisher(CompressedImage, right_image_topic_, 1)
        
        self.br = CvBridge()

        self.get_logger().info(
            f"Starting publishers...")
        
        self.start_cameras()

        self.timer = self.create_timer(1.0/self.fps, self.image_callback)
        self.get_logger().info(f"Stereocamera node ready with {self.fps} FPS and {self.resolution_factor*100}% of HD resolution")

    def close_videocapture(self):
        if self.left_camera is not None:
            self.left_camera.stop() 
            if self.left_camera.read_thread is not None:
                self.left_camera.read_thread.join()  # Wait for the thread to finish
            self.left_camera.release()
        if self.right_camera is not None:
            self.right_camera.stop()
            if self.right_camera.read_thread is not None: 
                self.right_camera.read_thread.join()  # Wait for the thread to finish
            self.right_camera.release()

    def shutdown(self):
        self.close_videocapture()
        rclpy.shutdown()

    def image_callback(self):
        try:
            
            time_msg = self.get_time_msg()
            if self.left_camera.video_capture.isOpened():
                _, left_image = self.left_camera.read()
                left_processed_img = self.preprocess_image(left_image)
                left_img_msg = self.get_image_msg(left_processed_img, time_msg, compressed=True)
                #left_img_msg = self.get_image_msg(left_image, time_msg, compressed=True)
                self.left_image_publisher_.publish(left_img_msg)

            if self.right_camera.video_capture.isOpened():
                _, right_image = self.right_camera.read()
                right_processed_img = self.preprocess_image(right_image)
                right_processed_img = self.shift_image(right_processed_img, int(right_image.shape[0]*0.017))
                right_img_msg = self.get_image_msg(right_processed_img, time_msg, compressed=True, left=False)
                self.right_image_publisher_.publish(right_img_msg)
            
            self.exception_counter = 0
            # stacked_img = cv2.hconcat([left_processed_img, right_processed_img])
            # stacked_img_msg = self.get_image_msg(stacked_img, time_msg, compressed=True)
            # self.left_image_publisher_.publish(stacked_img_msg)
        except Exception as e:
            self.exception_counter += 1
            if self.exception_counter > 30:
                self.get_logger().error("Consecutive error for 30 times in image callback, shutting down")
                self.shutdown()
            print(e)


    def get_time_msg(self):
        time_msg = Time()
        msg_time = self.get_clock().now().seconds_nanoseconds()

        time_msg.sec = int(msg_time[0])
        time_msg.nanosec = int(msg_time[1])
        return time_msg
    
    def transparent_border(self,image,border_thickness):
        height, width = image.shape[:2]
        new_height = height + 2 * border_thickness
        new_width = width + 2 * border_thickness
        canvas = np.zeros((new_height, new_width, 4), dtype=np.uint8)
        canvas[border_thickness : height + border_thickness, border_thickness : width + border_thickness] = np.dstack((image, np.full((height, width), 255, dtype=np.uint8)))
        return canvas

    def shift_image(self, image, dy, fill_color=[0,0,0]):
        M = np.float32([[1,0,0],[0,1,dy]])
        shifted = cv2.warpAffine(image, M, (image.shape[1],image.shape[0]))
        if dy > 0:
            shifted[:dy, :] = fill_color
        elif dy < 0:
            shifted[dy:,:] = fill_color
        return shifted

    def preprocess_image(self, image):
        '''
        # Cameras are mounted vertically, so we need to crop 80% on that axis
        height, width, _ = image.shape

        # Define start and end points for the crop
        start_width = int(0.2 * width)  # start at 10% of the image width
        end_width = int(0.8 * width)  # end at 90% of the image width

        # Crop the image
        crop = image[:,start_width:end_width]
        padn = 1
        pad = cv2.copyMakeBorder(crop, top=0, bottom=0, left=padn, right=padn, borderType=cv2.BORDER_CONSTANT, value=[255,255,255])
        '''
        #print(image.shape)
        h,w,_ = image.shape
        
        diff = int(abs(h-w)/6)
        crop = image[int(diff):int(h-diff), :]
        
        #pad = crop # self.transparent_border(crop, 50)
        #padn = int((crop.shape[0] - crop.shape[1]) / 2)
        pad = cv2.copyMakeBorder(crop, top=0, bottom=0, left=int(diff), right=int(diff), borderType=cv2.BORDER_CONSTANT, value=[0,0,0])
        
        return pad

    def get_image_msg(self, image, time,compressed=False,left=True):
        """
        Get image message, takes image as input and returns CvBridge image message
        :param image: cv2 image
        :return: sensor_msgs/Imag
        """
        img_msg = self.br.cv2_to_compressed_imgmsg(image,dst_format='jpeg' ) if compressed else self.br.cv2_to_imgmsg(image)
        img_msg.header.stamp = time
        img_msg.header.frame_id = self.left_frame_id_ if left else self.right_frame_id_
        return img_msg

    def start_cameras(self):
    
        self.left_camera = CSI_Camera()
        self.left_camera.open(
            gstreamer_pipeline(
                sensor_id=0,
                #capture_width=1920,
                #capture_height=1080,
                flip_method=3,
                display_width=int(self.resolution_factor*720),
                display_height=int(self.resolution_factor*1280)
            )
        )
        self.left_camera.start()

        self.right_camera = CSI_Camera()
        self.right_camera.open(
            gstreamer_pipeline(
                sensor_id=1,
                #capture_width=1920,
                #capture_height=1080,
                flip_method=1,
                display_width=int(self.resolution_factor*720),
                display_height=int(self.resolution_factor*1280),
            )
        )
        self.right_camera.start()


""" 
gstreamer_pipeline returns a GStreamer pipeline for capturing from the CSI camera
Flip the image by setting the flip_method (most common values: 0 and 2)
display_width and display_height determine the size of each camera pane in the window on the screen
Default 1920x1080
"""


def gstreamer_pipeline(
    sensor_id=0,
    # sensor_mode=1,
    capture_width=720,
    capture_height=1280,
    display_width=720,#int(self.resoultion_factor*720), #720, #int(720), #3040,#int(3040/2),
    display_height=1280,#,int(self.resolution_factor*1280), #1280, #int(1280),#4056,#int(4056/2),
    framerate=20,
    flip_method=2,
):
    return (
        "nvarguscamerasrc sensor-id=%d  exposurecompensation=0 wbmode=1 ! " #sensor-mode=%d
        "video/x-raw(memory:NVMM), width=(int)%d, height=(int)%d, framerate=(fraction)%d/1 ! "
        "nvvidconv flip-method=%d ! "
        "video/x-raw, width=(int)%d, height=(int)%d, format=(string)BGRx ! "
        "videoconvert ! "
        "video/x-raw, format=(string)BGR ! appsink"
        % (
            sensor_id,
            # sensor_mode,
            capture_width,
            capture_height,
            framerate,
            flip_method,
            display_width,
            display_height,
        )
    )

def main():
    rclpy.init()
    camera_node = CameraNode()
    try:
        rclpy.spin(camera_node)
    except Exception as e:
        pass
        #print(e)
    finally:
        camera_node.close_videocapture()
        camera_node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()
