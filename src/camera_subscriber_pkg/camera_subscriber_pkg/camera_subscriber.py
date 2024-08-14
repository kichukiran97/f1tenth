#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from internal_interface.msg import EncodedImage
import cv2
import numpy as np

class CameraSubscriber(Node):
    def __init__(self):
        super().__init__('camera_subscriber')
        self.subscription = self.create_subscription(
            EncodedImage,
            'birds_eye/birds_eye_raw',
            self.listener_callback,
            10
        )
        # self.subscription = self.create_subscription(
        #     EncodedImage,
        #     'camera/raw',
        #     self.listener_callback,
        #     10
        # )
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Received image message')
        try:
            # Convert the list of bytes to a single byte array
            byte_data = b''.join(msg.data)
            nparr = np.frombuffer(byte_data, np.uint8)
            cv_image = cv2.imdecode(nparr, cv2.IMREAD_COLOR)
            if cv_image is not None:
                self.get_logger().info('Decoded image successfully')
                # Flip the image if needed
                cv_image = cv2.flip(cv_image, 0)  # Flip vertically
                # cv_image = cv2.flip(cv_image, 1)  # Flip horizontally
                # Display the image
                print(cv_image.shape)
                cv2.imshow('Camera Image', cv_image)
                cv2.waitKey(1)
            else:
                self.get_logger().error('Failed to decode image')
        except Exception as e:
            self.get_logger().error(f"Error processing image: {e}")

def main(args=None):
    rclpy.init(args=args)
    camera_subscriber = CameraSubscriber()
    try:
        rclpy.spin(camera_subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        camera_subscriber.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
