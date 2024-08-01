#!/bin/python3
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from camera_pkg.default_camera_devices import *
from camera_pkg.camera_manager import CameraManager
from camera_pkg.camera_shared_object import CameraSharedObject
from camera_pkg.camera_publisher import CameraPublisher
from calibration_pkg.save_image import SaveImage
from calibration_pkg.chessboard_calibration import ChessboardCalibration

from threading import Thread
import time

keep_going = True
calibration_obj = None

# def get_camera_obj():
#     global calibration_obj
#     return calibration_obj

def undistort_publish_loop():
    global keep_going
    global calibration_obj
    shared_object = CameraSharedObject(False)
    undistorted_publisher = CameraPublisher(None, "calibration/undistorted", shared_object=None, publisher_name="camera_undistorted_publisher")

    while keep_going:
        try:
            img = shared_object.get_frame()["frame"].copy()
            img = calibration_obj.undistort(img)
            undistorted_publisher.frame_callback(img)
        except KeyboardInterrupt:
            break
        except Exception as e:
            print(e)
        time.sleep(0.1)


def main(args=None):
    global keep_going
    global calibration_obj
    rclpy.init(args=args)

    nx, ny = (9, 6)
    calibration_images_dir = "calibration_images/"

    camera_stream_object = get_native_camera_device()
    camera_manager = CameraManager(camera_stream_object, create_shared_object=True, create_publisher=True)
    try:
        calibration_obj = ChessboardCalibration(calibration_images_dir, nx, ny)
    except Exception as e:
        print(e)
        calibration_obj = None

    undistort_publisher_thread = Thread(target=undistort_publish_loop)
    undistort_publisher_thread.start()

    def update_calibration():
        global calibration_obj
        try:
            calibration_obj = ChessboardCalibration(calibration_images_dir, nx, ny)
        except Exception as e:
            print(e)
            calibration_obj = None

    save_image_action = SaveImage(callback=update_calibration)

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(camera_manager)
    executor.add_node(save_image_action)
    # executor.add_node(undistorted_publisher)

    try:
        executor.spin()
    except KeyboardInterrupt:
        keep_going = False
        undistort_publisher_thread.join()
        camera_manager.exit()
        executor.shutdown()
        camera_manager.destroy()
        save_image_action.destroy()
        rclpy.shutdown()
    except Exception as e:
        print(e)
        keep_going = False
        undistort_publisher_thread.join()
        camera_manager.exit()
        executor.shutdown()
        camera_manager.destroy()
        save_image_action.destroy()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
