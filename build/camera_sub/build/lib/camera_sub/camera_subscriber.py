import rclpy
from rclpy.node import Node
from internal_interface.msg import EncodedImage
import numpy as np
import cv2
from io import BytesIO

class CameraSubscriber(Node):
    def __init__(self, topic: str):
        super().__init__('dashboard_camera_subscriber')
        self.enabled = False
        self.topic = topic
        self.subscription = None
        self.callbacks = []
        self.create_camera_subscription(self.topic)

    def add_callback(self, callback):
        self.callbacks.append(callback)

    def disable(self):
        self.subscription = None
        self.enabled = False

    def enable(self):
        self.create_camera_subscription(self.topic)
        self.enabled = True

    def set_topic_name(self, topic_name: str):
        enabled = self.enabled
        if enabled:
            self.disable()
        self.topic = topic_name
        if enabled:
            self.enable()

    def topic_callback(self, msg: EncodedImage):
        # Convert list to bytes
        data_bytes = bytes(msg.data)
        
        # Convert byte data to numpy array
        np_arr = np.frombuffer(data_bytes, np.uint8)
        
        # Decode numpy array to image
        img = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)
        
        # Call all registered callbacks with the decoded image
        for callback in self.callbacks:
            callback(img)

    def is_enabled(self) -> bool:
        return self.enabled

    def create_camera_subscription(self, topic: str):
        self.subscription = self.create_subscription(
            EncodedImage,
            topic,
            self.topic_callback,
            10
        )

def display_image(image):
    if image is not None:
        cv2.imshow("Received Image", image)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    subscriber = CameraSubscriber('camera/raw')

    # Add the display callback
    subscriber.add_callback(display_image)
    subscriber.enable()

    try:
        rclpy.spin(subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        subscriber.disable()
        subscriber.destroy_node()
        cv2.destroyAllWindows()  # Ensure OpenCV windows are closed
        rclpy.shutdown()

if __name__ == '__main__':
    main()
