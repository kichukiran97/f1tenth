#!/bin/python3
import rclpy
from rclpy.node import Node
import time
import cv2
from threading import Thread
import numpy as np

from internal_interface.msg import EncodedImage
from camera_pkg.camera_stream import CameraStream
from camera_pkg.camera_shared_object import CameraSharedObject

class CameraPublisher(Node):
    def __init__(self, camera_stream: CameraStream, topic_name: str, *, shared_object: CameraSharedObject = None, publisher_name="camera_publisher", create_publisher=True):
        super().__init__(publisher_name)
        self.stream = camera_stream

        if self.stream != None:
            self.stream.set_frame_callback(self.frame_callback)

        self.quality = 15
        if create_publisher:
            self.publisher_ = self.create_publisher(EncodedImage, topic_name, 1)
        else:
            self.publisher_ = None
        self.shared_object = shared_object

        self.latest_frame = None
        self.fps = 0
        self._last_frame_ts_list = [time.time()]
        self._last_frame_ts_list_max = 15

        self.publish_image_thread = None

    def exit(self):
        if not self.publish_image_thread is None:
            self.publish_image_thread.join()

    def publishImage(self, publisher, rgb_image, capture_ts):
        if rgb_image is None:
            return

        msg = EncodedImage()
        _, rgb_encoded = cv2.imencode('.jpg', rgb_image, [int(cv2.IMWRITE_JPEG_QUALITY), self.quality])
        byte_data = rgb_encoded.tobytes()
        msg.data = [bytes([b]) for b in byte_data]
        msg.capture_ts = capture_ts
        msg.publish_ts = time.time()
        publisher.publish(msg)

        # TODO: Cap FPS here properly
        time.sleep(0.1)

    def frame_callback(self, frame):
        if frame is None:
            return

        ts = time.time()
        self.latest_frame = np.copy(frame)

        if self.publisher_:
            if (self.publish_image_thread is None) or (not self.publish_image_thread.is_alive()):
                self.publish_image_thread = Thread(target = CameraPublisher.publishImage, args = (self, self.publisher_, self.latest_frame.copy(), ts))
                self.publish_image_thread.start()
        if self.shared_object:
            self.shared_object.save_frame(self.latest_frame)

        self._last_frame_ts_list = self._last_frame_ts_list + [ts]
        if len(self._last_frame_ts_list) > self._last_frame_ts_list_max:
            self._last_frame_ts_list = self._last_frame_ts_list[len(self._last_frame_ts_list) - self._last_frame_ts_list_max:]
        self.fps = len(self._last_frame_ts_list) / (self._last_frame_ts_list[-1] - self._last_frame_ts_list[0] + 1e-10)
        # print("Recieved frame:", frame.shape, f"\tFPS: {self.fps}")
