import os
import multiprocessing
import multiprocessing.shared_memory
import pickle
import fcntl
import time
import sys
import numpy as np
from threading import Thread
from abc import ABC, abstractmethod

from camera_pkg.camera_shared_object import CameraSharedObject

class CameraSharedObjectClient:
    def __init__(self, camera_shared_object: CameraSharedObject):
        self.camera_shared_object = camera_shared_object
        self.update_loop_thread = Thread(target = self._update_loop)
        self.update_loop_delay = 0.01

        self.latest_frame_timestamp = time.time()
        self.latest_update_timestamp = time.time()
        self.force_update_delay = 0.5
        self.force_reconnect_smo_delay = 5.0

    def csoc_start(self):
        self.keep_going = True
        self.update_loop_thread.start()

    def exit(self):
        self._exit()
        self.keep_going = False
        self.update_loop_thread.join()
        self.camera_shared_object.exit()

    def _update_loop(self):
        while self.keep_going:
            time.sleep(self.update_loop_delay)
            timestamp, frame = self.camera_shared_object.get_timestamp_and_frame()
            # data = self.camera_shared_object.get_frame()
            # if data is None:
            #     continue
            # timestamp = np.frombuffer(data[:8], dtype=np.float64)[0]
            # frame = np.frombuffer(data[8:8+self.camera_shared_object.get_buffer_size()], dtype=np.uint8).reshape(self.camera_shared_object.get_image_shape())

            if timestamp is None or frame is None:
                continue

            if timestamp > self.latest_frame_timestamp:
                self.latest_frame_timestamp = timestamp
                self.latest_update_timestamp = time.time()
                self.handle_new_frame(frame)
            else:
                if time.time() > self.latest_frame_timestamp + self.force_reconnect_smo_delay:
                    try:
                        self.camera_shared_object.exit()
                    except Exception:
                        pass
                continue
            
            if time.time() > self.latest_update_timestamp + self.force_update_delay:
                self.latest_update_timestamp = time.time()
                self.handle_new_frame(frame)

    @abstractmethod
    def _exit(self) -> None:
        pass

    @abstractmethod
    def handle_new_frame(self, frame) -> None:
        pass
