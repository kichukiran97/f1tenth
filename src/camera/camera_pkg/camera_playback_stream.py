import cv2
from threading import Thread
import time
import numpy as np
from typing import Tuple

from camera_pkg.camera_stream import CameraStream

class CameraPlaybackStream(CameraStream):
    def __init__(self, uri, fps_limit, *, start_immediately = False, frame_callback = None):
        self.uri = uri
        self.fps_limit = fps_limit
        self.frame_delay = 1.0 / self.fps_limit
        self.last_frame_time = time.time()
        super().__init__(start_immediately = start_immediately, frame_callback = frame_callback)

    def _capture_read(self) -> Tuple[int, np.array]:
        ts = time.time()
        sleep_time = self.last_frame_time + self.frame_delay - ts
        if sleep_time > 0:
            time.sleep(sleep_time)
        self.last_frame_time += self.frame_delay
        return self.capture.read()

    def _setup_capture(self) -> int:
        self.capture = cv2.VideoCapture(self.uri)

        if self.capture.isOpened():
            return 1
        return 0

    def _start(self) -> None:
        pass

    def _exit(self) -> None:
        self.capture.release()
