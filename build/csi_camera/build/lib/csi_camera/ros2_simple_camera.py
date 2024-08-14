#!/usr/bin/python3

# based on https://github.com/JetsonHacksNano/CSI-Camera

import cv2

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from builtin_interfaces.msg import Time
from cv_bridge import CvBridge


def gstreamer_pipeline(
    sensor_id=0,
    capture_width=640,
    capture_height=480,
    display_width=480,
    display_height=640,
    framerate=60,
    flip_method=1,
):
    return (
        "nvarguscamerasrc sensor_mode=1 sensor-id=%d !"
        "video/x-raw(memory:NVMM), width=(int)%d, height=(int)%d, framerate=(fraction)%d/1 ! "
        "nvvidconv flip-method=%d ! "
        "video/x-raw, width=(int)%d, height=(int)%d, format=(string)BGRx ! "
        "videoconvert ! "
        "video/x-raw, format=(string)BGR ! appsink"
        % (
            sensor_id,
            capture_width,
            capture_height,
            framerate,
            flip_method,
            display_width,
            display_height,
        )
    )


class CameraNode(Node):
    def __init__(self, **kwargs):
        super().__init__("camera_node")
        image_topic_ = self.declare_parameter(
            "image_topic", "/image/left/image_compressed").value
        self.frame_id_ = self.declare_parameter("frame_id", "camera").value
        self.image_publisher_ = self.create_publisher(CompressedImage, image_topic_, 1)
        self.br = CvBridge()

        self.get_logger().info(
            f"Starting publisher:\n {gstreamer_pipeline(flip_method=0)}")
        self.video_capture = cv2.VideoCapture(
            gstreamer_pipeline(flip_method=3,framerate=10), cv2.CAP_GSTREAMER)

        self.timer = self.create_timer(1.0/60, self.image_callback)
        self.publish_timer = self.create_timer(1/10.0, self.publish_callback)
        self.last_image = None

    def close_videocapture(self):
        self.video_capture.release()

    def image_callback(self):
        if self.video_capture.isOpened():
            try:
                ret_val, self.last_image = self.video_capture.read()
                if ret_val:
                    # Rotate the image 90 degrees anticlockwise
                    self.last_image = cv2.rotate(self.last_image, cv2.ROTATE_90_COUNTERCLOCKWISE)
            except Exception as e:
                print(e)

    def publish_callback(self):
        time_msg = self.get_time_msg()
        img_msg = self.get_image_msg(self.last_image, time_msg)
        self.image_publisher_.publish(img_msg)

    def get_time_msg(self):
        time_msg = Time()
        msg_time = self.get_clock().now().seconds_nanoseconds()

        time_msg.sec = int(msg_time[0])
        time_msg.nanosec = int(msg_time[1])
        return time_msg

    def get_image_msg(self, image, time):
        """
        Get image message, takes image as input and returns CvBridge image message
        :param image: cv2 image
        :return: sensor_msgs/Imag
        """
        img_msg = self.br.cv2_to_compressed_imgmsg(image)  # , encoding="bgr8")
        img_msg.header.stamp = time
        img_msg.header.frame_id = self.frame_id_
        return img_msg

def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    rclpy.spin(camera_node)

    camera_node.close_videocapture()
    camera_node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()

