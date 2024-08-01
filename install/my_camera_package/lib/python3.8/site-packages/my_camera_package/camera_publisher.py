import cv2
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from my_camera_package.gstreamer_pipeline import gstreamer_pipeline

class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')
        self.publisher_ = self.create_publisher(Image, 'camera/image_raw', 10)
        self.timer = self.create_timer(1.0 / 30, self.timer_callback)  # 30 FPS
        self.bridge = CvBridge()
        
        # Set up GStreamer pipeline
        self.video_capture = cv2.VideoCapture(gstreamer_pipeline(flip_method=0), cv2.CAP_GSTREAMER)
        if not self.video_capture.isOpened():
            self.get_logger().error('Unable to open camera')
            rclpy.shutdown()
            return

    def timer_callback(self):
        ret, frame = self.video_capture.read()
        if ret:
            # Convert frame to ROS image message
            ros_image = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
            self.publisher_.publish(ros_image)
        else:
            self.get_logger().warn('Failed to capture image')

    def destroy_node(self):
        self.video_capture.release()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    camera_publisher = CameraPublisher()
    rclpy.spin(camera_publisher)
    camera_publisher.destroy_node()
    rclpy.shutdown()
