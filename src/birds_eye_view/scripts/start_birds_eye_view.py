#!/bin/python3
import rclpy
from rclpy.node import Node
import cv2

from camera_pkg.camera_shared_object import CameraSharedObject
from camera_pkg.default_shared_memory_objects import get_birds_eye_camera_shared_object, get_raw_camera_shared_object
from camera_pkg.camera_shared_object_client import CameraSharedObjectClient
from camera_pkg.camera_publisher import CameraPublisher
from birds_eye_view_pkg.birds_eye_transform import BirdsEyeTransform

class BirdsEyeViewConverter(Node, CameraSharedObjectClient):
    def __init__(self):
        Node.__init__(self, "birds_eye_view_converter")
        CameraSharedObjectClient.__init__(self, get_raw_camera_shared_object(is_publisher=False))

        self.smo_birds_eye = get_birds_eye_camera_shared_object(is_publisher=True)
        self.camera_publisher_undistorted = CameraPublisher(camera_stream=None, topic_name="birds_eye/undistorted", publisher_name="camera_publisher_undistorted")
        self.camera_publisher = CameraPublisher(camera_stream=None, topic_name="birds_eye/birds_eye_raw", publisher_name="camera_publisher_birds_eye")
        self.transform = BirdsEyeTransform(output_size=(640, 480))
        # self.transform = BirdsEyeTransform(output_size=(160, 120))

        self.csoc_start()

    def handle_new_frame(self, frame):
        birds_eye, undistorted = self.convert_to_birds_eye_view(frame)
        self.smo_birds_eye.save_frame(birds_eye, image_shape = self.transform.real_output_shape)
        self.camera_publisher.frame_callback(birds_eye)
        self.camera_publisher_undistorted.frame_callback(undistorted)

    def _exit(self):
        self.smo_birds_eye.exit()
        pass

    def convert_to_birds_eye_view(self, frame):
        return self.transform.forward(frame)

def main(args=None):
    rclpy.init(args=args)
    birds_eye = BirdsEyeViewConverter()
    try:
        rclpy.spin(birds_eye)
    except KeyboardInterrupt:
        birds_eye.exit()
    except Exception as e:
        print(e)
        birds_eye.exit()
        birds_eye.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
