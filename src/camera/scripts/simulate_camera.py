#!/bin/python3
import rclpy
from rclpy.node import Node

from camera_pkg.default_camera_devices import *
from camera_pkg.camera_manager import CameraManager

def main(args=None):
    rclpy.init(args=args)
    camera_stream_object = get_playback_camera_device()
    camera_publisher = CameraManager(camera_stream_object, create_shared_object=True, create_publisher=True)

    try:
        rclpy.spin(camera_publisher)
    except KeyboardInterrupt:
        camera_publisher.exit()
    except Exception as e:
        print(e)
        camera_publisher.exit()
        camera_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
