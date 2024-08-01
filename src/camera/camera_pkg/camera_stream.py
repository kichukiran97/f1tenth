import cv2
from threading import Thread
import time
from abc import ABC, abstractmethod
import numpy as np
from typing import Tuple

class CameraStream:
    def __init__(self, *, start_immediately = False, frame_callback = None):
        if not self._setup_capture():
            raise Exception("Error in capture setup")

        self.update_thread = Thread(target=self._update_loop)
        self.callback_thread = None
        self.frame_callback = frame_callback

        if start_immediately:
            self.start()

    def start(self):
        self.keep_updating = True
        self.update_thread.start()
        self._start()

    def exit(self):
        self.keep_updating = False
        self.update_thread.join()
        if self.callback_thread and self.callback_thread.is_alive():
            self.callback_thread.join()
        self._exit()

    def set_frame_callback(self, frame_callback):
        self.frame_callback = frame_callback

    def _frame_callback(self, frame):
        if self.frame_callback and not self.callback_thread or not self.callback_thread.is_alive():
            self.callback_thread = Thread(target = self.frame_callback, args = (np.copy(frame),))
            self.callback_thread.start()

    def _update_loop(self):
        while self.keep_updating:
            try:
                ret, frame = self._capture_read()
                if not ret:
                    print(time.time(), "Error reading frame")
                self._frame_callback(frame)
            except KeyboardInterrupt:
                break
            except Exception as e:
                print("Error:", e)

    @abstractmethod
    def _capture_read(self) -> Tuple[int, np.array]:
        pass    

    @abstractmethod
    def _setup_capture(self) -> int:
        pass

    @abstractmethod
    def _start(self) -> None:
        pass

    @abstractmethod
    def _exit(self) -> None:
        pass
