#!/bin/python3
import rclpy
from rclpy.node import Node
import numpy as np
import time
import cv2
from threading import Thread

from camera_pkg.camera_shared_object_client import CameraSharedObjectClient
from camera_pkg.default_shared_memory_objects import get_raw_camera_shared_object

class CameraRecording(Node, CameraSharedObjectClient):
    def __init__(self):
        Node.__init__(self, "camera_recording")
        CameraSharedObjectClient.__init__(self, get_raw_camera_shared_object(is_publisher=False))
        self.save_interval = 100.0
        self.start_recording()
        self.csoc_start()
        self.has_exited = False

    def start_recording(self):
        filename = f"videos/output_{int(time.time())}.mp4"
        self.video_fourcc = cv2.VideoWriter_fourcc(*"h264")
        self.video = cv2.VideoWriter(filename, self.video_fourcc, 28.0, (640, 480))
        self.record_start = time.time()
        print(f"Video recording started: {filename}")

    def _exit(self):
        self.has_exited = True
        self.video.release()

    def handle_new_frame(self, frame):
        ts = time.time()
        if ts - self.record_start >= self.save_interval:
            print("Saving video.")
            self.video.release()
            self.start_recording()
            return

        if self.has_exited:
            return
        try:
            if np.prod(frame.shape) < 1:
                return
            self.video.write(frame)
            print(f"{time.time():0.2f}: Saving frame.")
        except Exception as e:
            print(f"{time.time():0.2f}: Could not save frame. {str(e)}")

def main(args=None):
    rclpy.init(args=args)
    recorder = CameraRecording()
    try:
        rclpy.spin(recorder)
    except KeyboardInterrupt:
        recorder.exit()
    except Exception as e:
        print(e)
        recorder.exit()
        recorder.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
