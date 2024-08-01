from rclpy.node import Node
import time
from threading import Thread
import cv2
import numpy as np

from camera_pkg.camera_publisher import CameraPublisher
from lane_following_pkg.lane_thresholding import LaneThresholding
from lane_following_pkg.find_lane_lines import FindLaneLines

class LaneDetection(Node):
    def __init__(self):
        super().__init__("lane_detection")

        self.look_ahead_distance_from_camera_meters = 0.4
        self.image_shape = (160, 120,)
        # self.birds_eye_in_meters = (0.84, 0.63) # Updated 6.5.
        # self.birds_eye_in_meters = (1.07, 0.75) # Updated 7.5.
        self.birds_eye_in_meters = (1.35, 1.05)
        self.y_meter_to_px = self.image_shape[1] / self.birds_eye_in_meters[1]
        self.y_px_to_meter = (self.birds_eye_in_meters[1] / self.image_shape[1])
        self.x_px_to_meter = (self.birds_eye_in_meters[0] / self.image_shape[0])

        self.birds_eye_offset_meters = 0.27
        self.camera_to_rear_wheels_distance_meters = 0.2  #In reality it is 0.2m

        
        self.real_lookahead_distance_meters = self.look_ahead_distance_from_camera_meters + self.camera_to_rear_wheels_distance_meters
        self.look_ahead_distance_pixels = (self.look_ahead_distance_from_camera_meters - self.birds_eye_offset_meters) * self.y_meter_to_px

        # 22cm + 67cm/120px * (lad_px) = lad_m
        # lad_px = (lad_m - 22cm) * 120px / 67cm

        self.lane_thresholding = LaneThresholding()
        self.find_lane_lines_object = FindLaneLines()
        self.camera_publisher = CameraPublisher(camera_stream=None, topic_name="lane_detection/threshold", publisher_name="camera_publisher_threshold")

        print(f"Lane detection: meters={self.look_ahead_distance_from_camera_meters:0.5f} pixels={self.look_ahead_distance_pixels:0.5f}")

    def detect_lanes(self, frame):
        # frame = self.lane_thresholding.threshold(frame)
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        frame = cv2.resize(frame, self.image_shape)

        try:
            x, intersection_distance, frame, confidence, intersection_angle = self.find_lane_lines_object.forward(frame, look_ahead_distance_pixels = self.look_ahead_distance_pixels)
            self.camera_publisher.frame_callback(frame)

            x_meters = self.x_px_to_meter * x * 2
            print(f"X IN METERS: {x_meters:.2f}")
            print(f"REAL LOOKAHEAD DISTANCE IN METERS {self.real_lookahead_distance_meters:.2f}")

            # alpha = np.arctan2(x_meters, self.real_lookahead_distance_meters)
            alpha = np.arctan2(x, 2*self.look_ahead_distance_pixels)

            print(f"Alpha: {alpha:.2f}, confidence: {confidence:.2f}")

            print("\n" * 6)

            return alpha, self.real_lookahead_distance_meters, confidence, intersection_distance, intersection_angle
            # return alpha, self.look_ahead_distance_pixels * self.y_px_to_meter, confidence
        except Exception as e:
            print(e)
            return 0.0, 0.0, -1e100, None, None
