from rclpy.node import Node
from rclpy.action import ActionServer
import pathlib
import cv2
from camera_pkg.camera_shared_object import CameraSharedObject
from calibration.action import TakeImage
from calibration.action import DoCameraCalibration
from calibration_pkg.chessboard_calibration import ChessboardCalibration

class SaveImage(Node):
    def __init__(self, *, callback=None):
        super().__init__('save_image_action')
        self.camera_shared_object = CameraSharedObject(False)
        self._action_server = ActionServer(self, TakeImage, "take_image", self.save_image_callback)
        self._action_server2 = ActionServer(self, DoCameraCalibration, "calibrate_camera", self.calibrate_camera_callback)
        self.calibration_path = pathlib.Path("calibration_images/")
        self.calibration_path.mkdir(parents=True, exist_ok=True)

        self.callback = callback
        
    def save_image_callback(self, goal_handle):
        self.get_logger().info('Taking image...')    
        
        try:
            data = self.camera_shared_object.get_frame()
            timestamp = data["timestamp"]
            frame = data["frame"]
            filename =  self.calibration_path / f"image_{int(timestamp)}.jpg"
            print(f"Saving to: {filename.stem}")
            cv2.imwrite(str(filename), frame)

            goal_handle.succeed()
            result = TakeImage.Result()
            result.success = True
        except Exception as e:
            print(e)
            goal_handle.abort()
            result = TakeImage.Result()
            result.success = False

        if self.callback:
            self.callback()
        return result

    def calibrate_camera_callback(self, goal_handle):
        self.get_logger().info('Calibrating camera...')    
        
        try:
            self.callback()
            goal_handle.succeed()
            result = DoCameraCalibration.Result()
            result.success = True
            return result
        except Exception as e:
            print(e)
            goal_handle.abort()
            result = DoCameraCalibration.Result()
            result.success = False