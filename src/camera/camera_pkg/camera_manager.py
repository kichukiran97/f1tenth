from camera_pkg.camera_publisher import CameraPublisher
from camera_pkg.camera_shared_object import CameraSharedObject
from camera_pkg.default_shared_memory_objects import get_raw_camera_shared_object
from rclpy.node import Node

class CameraManager(Node):
    def __init__(self, camera_stream_object, *, create_shared_object = True, create_publisher = True):
        super().__init__("camera_manager")

        self.camera_device = camera_stream_object
        if create_shared_object:
            self.shared_object = get_raw_camera_shared_object(is_publisher=True)
        else:
            self.shared_object = None
        if create_publisher:
            self.camera_publisher = CameraPublisher(self.camera_device, topic_name="camera/raw", shared_object=self.shared_object, create_publisher=True)
        else:
            self.camera_publisher = None
        self.camera_device.start()

    def exit(self):
        self.camera_device.exit()