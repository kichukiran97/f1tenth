#!/usr/bin/python3

# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import CompressedImage
# import cv2
# from cv_bridge import CvBridge


# class CameraSubscriber(Node):
#     def __init__(self):
#         super().__init__('camera_subscriber')
#         self.image_topic = self.declare_parameter("image_topic", "/image/left/image_compressed").value
#         self.subscription = self.create_subscription(
#             CompressedImage,
#             self.image_topic,
#             self.image_callback,
#             10)
#         self.subscription  # prevent unused variable warning
#         self.br = CvBridge()
#         self.get_logger().info(f"Subscribed to {self.image_topic}")

#     def image_callback(self, msg):
#         try:
#             # Convert the ROS Image message to OpenCV2
#             current_frame = self.br.compressed_imgmsg_to_cv2(msg)
#             # Display image
#             cv2.imshow("Camera Feed", current_frame)
#             # Press any key to close the window
#             cv2.waitKey(1)
#         except Exception as e:
#             self.get_logger().error(f"Could not convert image: {e}")


# def main(args=None):
#     rclpy.init(args=args)
#     camera_subscriber = CameraSubscriber()
#     rclpy.spin(camera_subscriber)

#     camera_subscriber.destroy_node()
#     rclpy.shutdown()
#     cv2.destroyAllWindows()


# if __name__ == "__main__":
#     main()

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import cv2
from cv_bridge import CvBridge
import numpy as np

class LaneDetectionNode(Node):
    def __init__(self):
        super().__init__('lane_detection_node')
        self.subscription = self.create_subscription(
            CompressedImage,
            '/image/left/image_compressed',
            self.image_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.br = CvBridge()

    def image_callback(self, msg):
        # Convert ROS image to OpenCV format
        current_frame = self.br.compressed_imgmsg_to_cv2(msg)

        # Crop the image to remove the bottom part (e.g., wheel)
        cropped_frame = self.crop_image(current_frame)

        # Apply lane detection algorithm
        lane_detected_image = self.process_image(cropped_frame)

        # Display the processed frame
        cv2.imshow("Lane Detection", lane_detected_image)
        cv2.waitKey(1)

    def crop_image(self, image):
        # Define the region to crop - adjust these values as needed
        height, width, _ = image.shape
        top_crop = 0  # No cropping from the top
        bottom_crop = int(height * 0.7)  # Keep only the top 70% of the image
        left_crop = 0  # No cropping on the left
        right_crop = width  # No cropping on the right
        
        # Crop the image
        cropped_image = image[top_crop:bottom_crop, left_crop:right_crop]
        return cropped_image

    def process_image(self, image):
        # Convert the image to grayscale
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        
        # Apply Gaussian blur to the grayscale image
        blur = cv2.GaussianBlur(gray, (5, 5), 0)
        
        # Perform Canny edge detection
        edges = cv2.Canny(blur, 50, 150)
        
        # Define a region of interest (ROI) - a polygon where we expect the lanes to be
        height, width = edges.shape
        mask = np.zeros_like(edges)

        # Defining the region of interest as a trapezoid
        polygon = np.array([[
            (0, height),
            (width, height),
            (int(0.6 * width), int(0.6 * height)),
            (int(0.4 * width), int(0.6 * height))
        ]], np.int32)

        cv2.fillPoly(mask, polygon, 255)
        
        # Mask the edges image using the ROI
        masked_edges = cv2.bitwise_and(edges, mask)
        
        # Perform Hough Line Transform to detect lines
        lines = cv2.HoughLinesP(masked_edges, rho=1, theta=np.pi/180, threshold=50, minLineLength=50, maxLineGap=150)
        
        # Draw the detected lines on the original image
        line_image = np.zeros_like(image)
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line[0]
                cv2.line(line_image, (x1, y1), (x2, y2), (255, 0, 0), 10)

        # Combine the original image with the line image
        combined_image = cv2.addWeighted(image, 0.8, line_image, 1, 1)

        return combined_image

def main(args=None):
    rclpy.init(args=args)
    lane_detection_node = LaneDetectionNode()

    try:
        rclpy.spin(lane_detection_node)
    except KeyboardInterrupt:
        pass

    lane_detection_node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
