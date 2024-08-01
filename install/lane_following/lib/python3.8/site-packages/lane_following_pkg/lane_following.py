import rclpy
from rclpy.node import Node
import time
from threading import Thread

from camera_pkg.camera_shared_object import CameraSharedObject
from camera_pkg.camera_shared_object_client import CameraSharedObjectClient
from camera_pkg.default_shared_memory_objects import get_birds_eye_camera_shared_object
from lane_following_pkg.lane_detection import LaneDetection
from internal_interface.msg import LookAheadPoint

class LaneFollowing(Node, CameraSharedObjectClient):
    def __init__(self):
        Node.__init__(self, "lane_following")
        CameraSharedObjectClient.__init__(self, get_birds_eye_camera_shared_object(is_publisher=False))

        self.lane_detection = LaneDetection()
        self.control_publisher = self.create_publisher(LookAheadPoint, "control/look_ahead_point", 1)
        self.csoc_start()

    def _exit(self):
        pass

    def handle_new_frame(self, frame):
        alpha, look_ahead_distance, confidence, intersection_distance, intersection_angle = self.lane_detection.detect_lanes(frame)

        # TODO: publish intersection_distance, intersection_distance

        control = LookAheadPoint()
        control.alpha = float(alpha)
        control.look_ahead_distance = float(look_ahead_distance)
        control.confidence = float(confidence * 100) * 0 - 10000000
        control.source = "lane_following"

        print(f"Publishing {look_ahead_distance}, {alpha}, conf pub {control.confidence}")
        self.control_publisher.publish(control)
