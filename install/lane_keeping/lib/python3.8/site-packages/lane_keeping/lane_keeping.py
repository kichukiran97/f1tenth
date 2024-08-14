# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import CompressedImage
# from ackermann_msgs.msg import AckermannDriveStamped
# import cv2
# from cv_bridge import CvBridge
# import cv2
# import numpy as np

# class LaneKeepingNode(Node):
#     def __init__(self):
#         super().__init__('lane_keeping_node')
        
#         # Create a subscriber for the camera feed
#         self.subscription = self.create_subscription(
#             CompressedImage,
#             '/image/left/image_compressed',
#             self.image_callback,
#             10)
#         self.subscription  # prevent unused variable warning

#         # Create a publisher for drive commands
#         self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)

#         self.br = CvBridge()
#         self.desired_speed = 0.5  # Set your desired speed (m/s)
    
#     def image_callback(self, msg):
#         # Convert the compressed image message to an OpenCV image
#         current_frame = self.br.compressed_imgmsg_to_cv2(msg)

#         # Crop the image to remove the bottom part (e.g., wheel)
#         cropped_frame = self.crop_image(current_frame)

#         # Process the image to detect lanes and calculate steering angle
#         steering_angle = self.calculate_steering_angle(cropped_frame)

#         # Publish the drive command
#         self.publish_drive_command(steering_angle)

#         # Display the processed frame for visualization
#         cv2.imshow("Lane Keeping", cropped_frame)
#         cv2.waitKey(1)

#     def crop_image(self, image):
#         # Define the region to crop - adjust these values as needed
#         height, width, _ = image.shape
#         top_crop = 0  # No cropping from the top
#         bottom_crop = int(height * 0.7)  # Keep only the top 70% of the image
#         left_crop = 0  # No cropping on the left
#         right_crop = width  # No cropping on the right
        
#         # Crop the image
#         cropped_image = image[top_crop:bottom_crop, left_crop:right_crop]
#         return cropped_image

#     def calculate_steering_angle(self, image):
#         # Convert the image to grayscale
#         gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

#         # Apply Gaussian blur to reduce noise and improve edge detection
#         blur = cv2.GaussianBlur(gray, (5, 5), 0)

#         # Use Canny edge detection to find edges in the image
#         edges = cv2.Canny(blur, 50, 150)

#         # Define a region of interest (ROI)
#         height, width = edges.shape
#         mask = np.zeros_like(edges)

#         # Define a trapezoidal region of interest
#         polygon = np.array([[
#             (int(0.2 * width), height),
#             (int(0.8 * width), height),
#             (int(0.6 * width), int(0.6 * height)),
#             (int(0.4 * width), int(0.6 * height))
#         ]], np.int32)

#         cv2.fillPoly(mask, polygon, 255)
#         masked_edges = cv2.bitwise_and(edges, mask)

#         # Perform Hough Line Transform to detect lane lines
#         lines = cv2.HoughLinesP(masked_edges, rho=1, theta=np.pi/180, threshold=50, minLineLength=50, maxLineGap=150)

#         if lines is not None:
#             # Calculate the average slope of the detected lines
#             left_lines = []
#             right_lines = []

#             for line in lines:
#                 x1, y1, x2, y2 = line[0]
#                 slope = (y2 - y1) / (x2 - x1)
#                 if slope < 0:
#                     left_lines.append(line)
#                 else:
#                     right_lines.append(line)

#             # Average the slope and intercept for left and right lanes
#             if left_lines:
#                 left_lane = np.mean(left_lines, axis=0).flatten()
#                 left_slope = (left_lane[3] - left_lane[1]) / (left_lane[2] - left_lane[0])
#             else:
#                 left_slope = None

#             if right_lines:
#                 right_lane = np.mean(right_lines, axis=0).flatten()
#                 right_slope = (right_lane[3] - right_lane[1]) / (right_lane[2] - right_lane[0])
#             else:
#                 right_slope = None

#             # Calculate the steering angle based on the lane slopes
#             if left_slope and right_slope:
#                 steering_angle = -(left_slope + right_slope) / 2  # Average of left and right slopes
#             elif left_slope:
#                 steering_angle = -left_slope
#             elif right_slope:
#                 steering_angle = -right_slope
#             else:
#                 steering_angle = 0.0  # Default to straight if no lines are detected
#         else:
#             steering_angle = 0.0  # Default to straight if no lines are detected

#         # Adjust the steering angle scaling factor as needed
#         print(steering_angle)
#         steering_angle *= 0.2

#         return steering_angle

#     def publish_drive_command(self, steering_angle):
#         drive_msg = AckermannDriveStamped()
#         drive_msg.drive.steering_angle = steering_angle
#         drive_msg.drive.speed = self.desired_speed

#         self.drive_publisher.publish(drive_msg)

# def main(args=None):
#     rclpy.init(args=args)
#     lane_keeping_node = LaneKeepingNode()

#     try:
#         rclpy.spin(lane_keeping_node)
#     except KeyboardInterrupt:
#         pass

#     lane_keeping_node.destroy_node()
#     rclpy.shutdown()
#     cv2.destroyAllWindows()

# if __name__ == '__main__':
#     main()

#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from ackermann_msgs.msg import AckermannDriveStamped
import cv2
from cv_bridge import CvBridge

import numpy as np

class LaneKeepingNode(Node):
    def __init__(self):
        super().__init__('lane_keeping_node')
        
        # Subscriber for the camera feed
        self.subscription = self.create_subscription(
            CompressedImage,
            '/image/left/image_compressed',
            self.image_callback,
            10)
        self.subscription  # prevent unused variable warning

        # Publisher for drive commands
        self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)

        self.br = CvBridge()
        self.desired_speed = 0.5  # Desired speed in m/s

        # Define source and destination points for perspective transformation
        self.perspective_src = None
        self.perspective_dst = None
        self.compute_perspective_points()
    
    def compute_perspective_points(self):
        """
        Define source and destination points for perspective transformation.
        Adjust these points based on your camera's mounting and field of view.
        """
        width, height = 640, 480  # Adjust based on your camera's resolution

        # Source points (trapezoid) - region where the lanes are present
        self.perspective_src = np.float32([
            [width * 0.45, height * 0.6],
            [width * 0.55, height * 0.6],
            [width * 0.9, height * 0.9],
            [width * 0.1, height * 0.9]
        ])

        # Destination points (rectangle) - desired bird's eye view
        self.perspective_dst = np.float32([
            [width * 0.2, 0],
            [width * 0.8, 0],
            [width * 0.8, height],
            [width * 0.2, height]
        ])

        # Compute the perspective transform matrix
        self.M = cv2.getPerspectiveTransform(self.perspective_src, self.perspective_dst)
        self.M_inv = cv2.getPerspectiveTransform(self.perspective_dst, self.perspective_src)
    
    def image_callback(self, msg):
        # Convert the compressed image to OpenCV format
        frame = self.br.compressed_imgmsg_to_cv2(msg)

        cropped_frame = self.crop_image(frame)

        # Resize frame if necessary
        frame = cv2.resize(cropped_frame, (640, 480))

        # Apply perspective transformation
        birdseye_frame = cv2.warpPerspective(frame, self.M, (640, 480), flags=cv2.INTER_LINEAR)

        # Process the bird's eye view image to detect lanes and calculate steering angle
        steering_angle = self.process_image(birdseye_frame)

        # Publish the drive command
        self.publish_drive_command(steering_angle)

        # Visualization (optional)
        cv2.imshow("Original Frame", frame)
        cv2.imshow("Bird's Eye View", birdseye_frame)
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
        """
        Process the bird's eye view image to detect lane lines and calculate the steering angle.
        """
        # Convert to grayscale
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

        # Apply Gaussian blur
        blur = cv2.GaussianBlur(gray, (5, 5), 0)

        # Edge detection
        edges = cv2.Canny(blur, 50, 150)

        # Define region of interest if necessary
        # For bird's eye view, the entire image can be used

        # Detect lines using Hough Transform
        lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=100, minLineLength=50, maxLineGap=50)

        # Initialize variables
        left_fit = []
        right_fit = []

        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line[0]
                parameters = np.polyfit((x1, x2), (y1, y2), 1)
                slope = parameters[0]
                intercept = parameters[1]
                if abs(slope) < 0.5:
                    continue  # Filter out near-horizontal lines
                if slope < 0:
                    left_fit.append((slope, intercept))
                else:
                    right_fit.append((slope, intercept))

        # Average the lines
        left_fit_average = np.average(left_fit, axis=0) if left_fit else None
        right_fit_average = np.average(right_fit, axis=0) if right_fit else None

        # Calculate steering angle
        steering_angle = self.compute_steering_angle(image, left_fit_average, right_fit_average)

        return steering_angle

    def compute_steering_angle(self, image, left_fit, right_fit):
        """
        Compute the steering angle based on lane line fits.
        """
        height, width, _ = image.shape
        if left_fit is not None and right_fit is not None:
            # Both lane lines detected
            left_x = (height - left_fit[1]) / left_fit[0]
            right_x = (height - right_fit[1]) / right_fit[0]
            lane_center = (left_x + right_x) / 2
            frame_center = width / 2
            offset = lane_center - frame_center
        elif left_fit is not None:
            # Only left lane detected
            left_x = (height - left_fit[1]) / left_fit[0]
            lane_center = left_x + (width * 0.5)  # Assume standard lane width
            frame_center = width / 2
            offset = lane_center - frame_center
        elif right_fit is not None:
            # Only right lane detected
            right_x = (height - right_fit[1]) / right_fit[0]
            lane_center = right_x - (width * 0.5)  # Assume standard lane width
            frame_center = width / 2
            offset = lane_center - frame_center
        else:
            # No lane lines detected
            offset = 0

        # Convert offset to steering angle
        steering_angle = -offset / (width / 2)  # Normalized steering angle

        # Apply a scaling factor to match the vehicle's steering constraints
        max_steering_angle = 0.1  # ~20 degrees in radians
        steering_angle *= max_steering_angle

        # Clamp the steering angle
        steering_angle = max(min(steering_angle, max_steering_angle), -max_steering_angle)

        return steering_angle

    def publish_drive_command(self, steering_angle):
        """
        Publish the Ackermann drive command.
        """
        drive_msg = AckermannDriveStamped()
        drive_msg.drive.steering_angle = steering_angle
        drive_msg.drive.speed = self.desired_speed
        self.drive_publisher.publish(drive_msg)

def main(args=None):
    rclpy.init(args=args)
    lane_keeping_node = LaneKeepingNode()

    try:
        rclpy.spin(lane_keeping_node)
    except KeyboardInterrupt:
        pass

    lane_keeping_node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
