import cv2
from threading import Thread
import time
import numpy as np
from typing import Tuple

from camera_pkg.camera_stream import CameraStream

class CameraRealtimeStream(CameraStream):
    def __init__(self, uri, *, start_immediately = False, frame_callback = None, cv2_options = None, capture_shape = (640, 480)):
        self.uri = uri
        self.cv2_options = cv2_options
        self.capture_shape = capture_shape
        super().__init__(start_immediately = start_immediately, frame_callback = frame_callback)

    def _capture_read(self) -> Tuple[int, np.array]:
        return self.capture.read()

    def _setup_capture(self) -> int:
        if self.cv2_options is None:
            self.capture = cv2.VideoCapture(self.uri)
        else:
            self.capture = cv2.VideoCapture(self.uri, self.cv2_options)
        self.capture.set(cv2.CAP_PROP_FRAME_WIDTH, self.capture_shape[0])
        self.capture.set(cv2.CAP_PROP_FRAME_HEIGHT, self.capture_shape[1])

        return int(self.capture.isOpened())

    def _start(self) -> None:
        pass

    def _exit(self) -> None:
        self.capture.release()
