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

# #!/usr/bin/python3

# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import CompressedImage
# from ackermann_msgs.msg import AckermannDriveStamped
# import cv2
# from cv_bridge import CvBridge

# import numpy as np

# class LaneKeepingNode(Node):
#     def __init__(self):
#         super().__init__('lane_keeping_node')
        
#         # Subscriber for the camera feed
#         self.subscription = self.create_subscription(
#             CompressedImage,
#             '/image/left/image_compressed',
#             self.image_callback,
#             10)
#         self.subscription  # prevent unused variable warning

#         # Publisher for drive commands
#         self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)

#         self.br = CvBridge()
#         self.desired_speed = 0.5  # Desired speed in m/s

#         # Define source and destination points for perspective transformation
#         self.perspective_src = None
#         self.perspective_dst = None
#         self.compute_perspective_points()
    
#     def compute_perspective_points(self):
#         """
#         Define source and destination points for perspective transformation.
#         Adjust these points based on your camera's mounting and field of view.
#         """
#         width, height = 640, 480  # Adjust based on your camera's resolution

#         # Source points (trapezoid) - region where the lanes are present
#         self.perspective_src = np.float32([
#             [width * 0.45, height * 0.6],
#             [width * 0.55, height * 0.6],
#             [width * 0.9, height * 0.9],
#             [width * 0.1, height * 0.9]
#         ])

#         # Destination points (rectangle) - desired bird's eye view
#         self.perspective_dst = np.float32([
#             [width * 0.2, 0],
#             [width * 0.8, 0],
#             [width * 0.8, height],
#             [width * 0.2, height]
#         ])

#         # Compute the perspective transform matrix
#         self.M = cv2.getPerspectiveTransform(self.perspective_src, self.perspective_dst)
#         self.M_inv = cv2.getPerspectiveTransform(self.perspective_dst, self.perspective_src)
    
#     def image_callback(self, msg):
#         # Convert the compressed image to OpenCV format
#         frame = self.br.compressed_imgmsg_to_cv2(msg)

#         cropped_frame = self.crop_image(frame)

#         # Resize frame if necessary
#         frame = cv2.resize(cropped_frame, (640, 480))

#         # Apply perspective transformation
#         birdseye_frame = cv2.warpPerspective(frame, self.M, (640, 480), flags=cv2.INTER_LINEAR)

#         # Process the bird's eye view image to detect lanes and calculate steering angle
#         steering_angle = self.process_image(birdseye_frame)

#         # Publish the drive command
#         self.publish_drive_command(steering_angle)

#         # Visualization (optional)
#         cv2.imshow("Original Frame", frame)
#         cv2.imshow("Bird's Eye View", birdseye_frame)
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

#     def process_image(self, image):
#         """
#         Process the bird's eye view image to detect lane lines and calculate the steering angle.
#         """
#         # Convert to grayscale
#         gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

#         # Apply Gaussian blur
#         blur = cv2.GaussianBlur(gray, (5, 5), 0)

#         # Edge detection
#         edges = cv2.Canny(blur, 50, 150)

#         # Define region of interest if necessary
#         # For bird's eye view, the entire image can be used

#         # Detect lines using Hough Transform
#         lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=100, minLineLength=50, maxLineGap=50)

#         # Initialize variables
#         left_fit = []
#         right_fit = []

#         if lines is not None:
#             for line in lines:
#                 x1, y1, x2, y2 = line[0]
#                 parameters = np.polyfit((x1, x2), (y1, y2), 1)
#                 slope = parameters[0]
#                 intercept = parameters[1]
#                 if abs(slope) < 0.5:
#                     continue  # Filter out near-horizontal lines
#                 if slope < 0:
#                     left_fit.append((slope, intercept))
#                 else:
#                     right_fit.append((slope, intercept))

#         # Average the lines
#         left_fit_average = np.average(left_fit, axis=0) if left_fit else None
#         right_fit_average = np.average(right_fit, axis=0) if right_fit else None

#         # Calculate steering angle
#         steering_angle = self.compute_steering_angle(image, left_fit_average, right_fit_average)

#         return steering_angle

#     def compute_steering_angle(self, image, left_fit, right_fit):
#         """
#         Compute the steering angle based on lane line fits.
#         """
#         height, width, _ = image.shape
#         if left_fit is not None and right_fit is not None:
#             # Both lane lines detected
#             left_x = (height - left_fit[1]) / left_fit[0]
#             right_x = (height - right_fit[1]) / right_fit[0]
#             lane_center = (left_x + right_x) / 2
#             frame_center = width / 2
#             offset = lane_center - frame_center
#         elif left_fit is not None:
#             # Only left lane detected
#             left_x = (height - left_fit[1]) / left_fit[0]
#             lane_center = left_x + (width * 0.5)  # Assume standard lane width
#             frame_center = width / 2
#             offset = lane_center - frame_center
#         elif right_fit is not None:
#             # Only right lane detected
#             right_x = (height - right_fit[1]) / right_fit[0]
#             lane_center = right_x - (width * 0.5)  # Assume standard lane width
#             frame_center = width / 2
#             offset = lane_center - frame_center
#         else:
#             # No lane lines detected
#             offset = 0

#         # Convert offset to steering angle
#         steering_angle = -offset / (width / 2)  # Normalized steering angle

#         # Apply a scaling factor to match the vehicle's steering constraints
#         max_steering_angle = 0.1  # ~20 degrees in radians
#         steering_angle *= max_steering_angle

#         # Clamp the steering angle
#         steering_angle = max(min(steering_angle, max_steering_angle), -max_steering_angle)

#         return steering_angle

#     def publish_drive_command(self, steering_angle):
#         """
#         Publish the Ackermann drive command.
#         """
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


############################################################################################################

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

        self.kp = 0.16  # Proportional gain
        # self.kd = 0.001  # Derivative gain (adjust this value carefully)
        # self.prev_error = 0.0
        # self.prev_time = self.get_clock().now()
        self.steering_angle_history = []
        self.smoothing_factor = 5  # Adjust based on how much smoothing is needed

        # Publisher for drive commands
        self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)

        self.br = CvBridge()
        self.desired_speed = 5  # Desired speed in m/s

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
        #cv2.imshow("Original Frame", frame)
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

    # def process_image(self, image):
    #     """
    #     Process the bird's eye view image to detect lane lines and calculate the steering angle.
    #     """
    #     # Convert to grayscale
    #     gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    #     # Apply Gaussian blur
    #     blur = cv2.GaussianBlur(gray, (5, 5), 0)

    #     # Edge detection
    #     edges = cv2.Canny(blur, 50, 150)

    #     # Detect lines using Hough Transform
    #     lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=100, minLineLength=50, maxLineGap=50)

    #     # Initialize variables
    #     left_fit = []
    #     right_fit = []

    #     if lines is not None:
    #         for line in lines:
    #             x1, y1, x2, y2 = line[0]
    #             parameters = np.polyfit((x1, x2), (y1, y2), 1)
    #             slope = parameters[0]
    #             intercept = parameters[1]
    #             if abs(slope) < 0.5:
    #                 continue  # Filter out near-horizontal lines
    #             if slope < 0:
    #                 left_fit.append((slope, intercept))
    #             else:
    #                 right_fit.append((slope, intercept))

    #     # Average the lines
    #     left_fit_average = np.average(left_fit, axis=0) if left_fit else None
    #     right_fit_average = np.average(right_fit, axis=0) if right_fit else None

    #     # Calculate steering angle
    #     steering_angle = self.compute_steering_angle(image, left_fit_average, right_fit_average)
    #     print("Steering Angle : ", steering_angle)
    #     return steering_angle

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
                    # Draw left lane line
                    cv2.line(image, (x1, y1), (x2, y2), (0, 255, 0), 5)
                else:
                    right_fit.append((slope, intercept))
                    # Draw right lane line
                    cv2.line(image, (x1, y1), (x2, y2), (0, 255, 0), 5)

        # Average the lines
        left_fit_average = np.average(left_fit, axis=0) if left_fit else None
        right_fit_average = np.average(right_fit, axis=0) if right_fit else None

        # Calculate steering angle
        steering_angle = self.compute_steering_angle(image, left_fit_average, right_fit_average)
        steering_angle = self.smooth_steering_angle(steering_angle)

        # Draw the lane center and vehicle center
        height, width, _ = image.shape
        if left_fit_average is not None and right_fit_average is not None:
            left_x = int((height - left_fit_average[1]) / left_fit_average[0])
            right_x = int((height - right_fit_average[1]) / right_fit_average[0])
            lane_center = (left_x + right_x) // 2
        elif left_fit_average is not None:
            left_x = int((height - left_fit_average[1]) / left_fit_average[0])
            lane_center = left_x + int(width * 0.5)  # Assume standard lane width
        elif right_fit_average is not None:
            right_x = int((height - right_fit_average[1]) / right_fit_average[0])
            lane_center = right_x - int(width * 0.5)  # Assume standard lane width
        else:
            lane_center = width // 2

        # Draw lane center line
        cv2.line(image, (lane_center, height), (lane_center, int(height * 0.6)), (255, 0, 0), 5)

        # Draw vehicle center line
        frame_center = width // 2
        cv2.line(image, (frame_center, height), (frame_center, int(height * 0.6)), (0, 0, 255), 5)

        print("Steering Angle : ", steering_angle)
        return steering_angle


    def smooth_steering_angle(self, steering_angle):
        # Append the new steering angle to history
        self.steering_angle_history.append(steering_angle)

        # Keep only the last 'smoothing_factor' angles
        if len(self.steering_angle_history) > self.smoothing_factor:
            self.steering_angle_history.pop(0)

        # Compute the average of the history
        smoothed_angle = np.mean(self.steering_angle_history)
        return smoothed_angle

    def compute_steering_angle(self, image, left_fit, right_fit):
        height, width, _ = image.shape
        if left_fit is not None and right_fit is not None:
            left_x = (height - left_fit[1]) / left_fit[0]
            right_x = (height - right_fit[1]) / right_fit[0]
            lane_center = (left_x + right_x) / 2
            frame_center = width / 2
            offset = lane_center - frame_center
        elif left_fit is not None:
            left_x = (height - left_fit[1]) / left_fit[0]
            lane_center = left_x + (width * 0.5)  # Assume standard lane width
            frame_center = width / 2
            offset = lane_center - frame_center
        elif right_fit is not None:
            right_x = (height - right_fit[1]) / right_fit[0]
            lane_center = right_x - (width * 0.5)  # Assume standard lane width
            frame_center = width / 2
            offset = lane_center - frame_center
        else:
            offset = 0

        # Time for derivative calculation
        # current_time = self.get_clock().now()
        # time_delta = (current_time - self.prev_time).nanoseconds / 1e9  # Convert to seconds

        # PD controller
        error = -offset / (width / 2)
        # derivative = (error - self.prev_error) / time_delta if time_delta > 0 else 0.0

        # Calculate steering angle
        # steering_angle = self.kp * error + self.kd * derivative
        steering_angle = self.kp * error

        # # Update previous values
        # self.prev_error = error
        # self.prev_time = current_time

        
        # Apply a scaling factor to match the vehicle's steering constraints
        max_steering_angle = 25  # Adjust to match vehicle's constraints
        steering_angle = max(min(steering_angle, max_steering_angle), -max_steering_angle)
        # print(steering_angle)
        return steering_angle

    def publish_drive_command(self, steering_angle):
        drive_msg = AckermannDriveStamped()

        # Adaptive speed control
        max_speed = 0.5
        min_speed = 0.5
        speed = max(max_speed - abs(steering_angle) * 2, min_speed)

        drive_msg.drive.steering_angle = steering_angle
        drive_msg.drive.speed = speed
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


##################################################################################################################

# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import CompressedImage
# from ackermann_msgs.msg import AckermannDriveStamped
# import cv2
# from cv_bridge import CvBridge

# import numpy as np

# class LaneKeepingNode(Node):
#     def __init__(self):
#         super().__init__('lane_keeping_node')
        
#         # Subscriber for the camera feed
#         self.subscription = self.create_subscription(
#             CompressedImage,
#             '/image/left/image_compressed',
#             self.image_callback,
#             10)
#         self.subscription  # prevent unused variable warning

#         # Publisher for drive commands
#         self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)

#         self.br = CvBridge()
#         self.desired_speed = 5  # Desired speed in m/s
        
#         # Define parameters for pure pursuit
#         self.wheel_base_L = 0.255  # Wheelbase of the vehicle (in meters)
#         self.lookahead_distance = 0.4  # Lookahead distance (in meters)

#         # Perspective transformation points
#         self.perspective_src = None
#         self.perspective_dst = None
#         self.compute_perspective_points()
    
#     def compute_perspective_points(self):
#         width, height = 640, 480  # Adjust based on your camera's resolution

#         # Source points (trapezoid) - region where the lanes are present
#         self.perspective_src = np.float32([
#             [width * 0.45, height * 0.6],
#             [width * 0.55, height * 0.6],
#             [width * 0.9, height * 0.9],
#             [width * 0.1, height * 0.9]
#         ])

#         # Destination points (rectangle) - desired bird's eye view
#         self.perspective_dst = np.float32([
#             [width * 0.2, 0],
#             [width * 0.8, 0],
#             [width * 0.8, height],
#             [width * 0.2, height]
#         ])

#         # Compute the perspective transform matrix
#         self.M = cv2.getPerspectiveTransform(self.perspective_src, self.perspective_dst)
#         self.M_inv = cv2.getPerspectiveTransform(self.perspective_dst, self.perspective_src)
    
#     def image_callback(self, msg):
#         frame = self.br.compressed_imgmsg_to_cv2(msg)
#         cropped_frame = self.crop_image(frame)
#         frame = cv2.resize(cropped_frame, (640, 480))

#         # Apply perspective transformation
#         birdseye_frame = cv2.warpPerspective(frame, self.M, (640, 480), flags=cv2.INTER_LINEAR)

#         # Process the bird's eye view image to detect lanes and calculate steering angle
#         steering_angle = self.process_image(birdseye_frame)

#         # Publish the drive command
#         self.publish_drive_command(steering_angle)

#         # Visualization (optional)
#         cv2.imshow("Bird's Eye View", birdseye_frame)
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

#     # def process_image(self, image):
#     #     # Convert to grayscale
#     #     gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

#     #     # Apply Gaussian blur
#     #     blur = cv2.GaussianBlur(gray, (5, 5), 0)

#     #     # Edge detection
#     #     edges = cv2.Canny(blur, 50, 150)

#     #     # Detect lines using Hough Transform
#     #     lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=100, minLineLength=50, maxLineGap=50)

#     #     if lines is not None:
#     #         for line in lines:
#     #             x1, y1, x2, y2 = line[0]
#     #             # Convert to polar coordinates
#     #             dx = x2 - x1
#     #             dy = y2 - y1
#     #             alpha = np.arctan2(dy, dx)
                
#     #             # Pure pursuit steering angle calculation
#     #             steering_angle = np.arctan2(2.0 * self.wheel_base_L * np.sin(alpha), self.lookahead_distance)
#     #             print(steering_angle)
#     #             return steering_angle
        
#     #     return 0.0  # If no lines are detected, return 0 steering angle

#     def process_image(self, image):
#         # Convert to grayscale
#         gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

#         # Apply Gaussian blur
#         blur = cv2.GaussianBlur(gray, (5, 5), 0)

#         # Edge detection
#         edges = cv2.Canny(blur, 50, 150)

#         # Detect lines using Hough Transform
#         lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=100, minLineLength=50, maxLineGap=50)

#         # Initialize lists for left and right lane lines
#         left_fit = []
#         right_fit = []

#         if lines is not None:
#             for line in lines:
#                 x1, y1, x2, y2 = line[0]
#                 # Draw each detected line
#                 cv2.line(image, (x1, y1), (x2, y2), (0, 255, 0), 2)

#                 # Convert to polar coordinates
#                 dx = x2 - x1
#                 dy = y2 - y1
#                 alpha = np.arctan2(dy, dx)

#                 # Pure pursuit steering angle calculation
#                 steering_angle = np.arctan2(2.0 * self.wheel_base_L * np.sin(alpha), self.lookahead_distance)

#             # Draw midpoint and lane center
#             if lines is not None:
#                 x_coords = [line[0][0] for line in lines] + [line[0][2] for line in lines]
#                 y_coords = [line[0][1] for line in lines] + [line[0][3] for line in lines]

#                 if len(x_coords) > 1:
#                     min_x, max_x = min(x_coords), max(x_coords)
#                     min_y, max_y = min(y_coords), max(y_coords)
#                     lane_center_x = (min_x + max_x) / 2
#                     lane_center_y = (min_y + max_y) / 2

#                     # Draw midpoint
#                     cv2.circle(image, (int(lane_center_x), int(lane_center_y)), 10, (0, 0, 255), -1)

#             # Draw lookahead point
#             lookahead_x = int(lane_center_x + self.lookahead_distance * np.cos(alpha))
#             lookahead_y = int(lane_center_y + self.lookahead_distance * np.sin(alpha))
#             cv2.circle(image, (lookahead_x, lookahead_y), 10, (255, 0, 0), -1)

#             print(f"Steering Angle: {steering_angle}")
#             return steering_angle

#         return 0.0  # If no lines are detected, return 0 steering angle

#     def publish_drive_command(self, steering_angle):
#         drive_msg = AckermannDriveStamped()

#         # Adaptive speed control
#         max_speed = 0.5
#         min_speed = 0.5
#         speed = 0.5

#         drive_msg.drive.steering_angle = steering_angle*0.5
#         drive_msg.drive.speed = speed
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

#-------------------------------------------------------------------------------------------------------------------------------

# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import CompressedImage
# from ackermann_msgs.msg import AckermannDriveStamped
# import cv2
# from cv_bridge import CvBridge
# import numpy as np

# class LaneKeepingNode(Node):
#     def __init__(self):
#         super().__init__('lane_keeping_node')
        
#         # Subscriber for the camera feed
#         self.subscription = self.create_subscription(
#             CompressedImage,
#             '/image/left/image_compressed',
#             self.image_callback,
#             10)

#         # Publisher for drive commands
#         self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)

#         self.br = CvBridge()
#         self.desired_speed = 5  # Desired speed in m/s
        
#         # Define parameters for pure pursuit
#         self.wheel_base_L = 0.255  # Wheelbase of the vehicle (in meters)
#         self.lookahead_distance = 1  # Lookahead distance (in meters)

#         # Perspective transformation points
#         self.compute_perspective_points()
    
#     def compute_perspective_points(self):
#         width, height = 640, 480  # Adjust based on your camera's resolution

#         # Source points (trapezoid) - region where the lanes are present
#         self.perspective_src = np.float32([
#             [width * 0.45, height * 0.6],
#             [width * 0.55, height * 0.6],
#             [width * 0.9, height * 0.9],
#             [width * 0.1, height * 0.9]
#         ])

#         # Destination points (rectangle) - desired bird's eye view
#         self.perspective_dst = np.float32([
#             [width * 0.2, 0],
#             [width * 0.8, 0],
#             [width * 0.8, height],
#             [width * 0.2, height]
#         ])

#         # Compute the perspective transform matrix
#         self.M = cv2.getPerspectiveTransform(self.perspective_src, self.perspective_dst)
    
#     def image_callback(self, msg):
#         frame = self.br.compressed_imgmsg_to_cv2(msg)
#         frame = cv2.resize(frame, (640, 480))  # Reduce resolution for faster processing

#         # Apply perspective transformation
#         birdseye_frame = cv2.warpPerspective(frame, self.M, (640, 480), flags=cv2.INTER_LINEAR)

#         # Process the bird's eye view image to detect lanes and calculate steering angle
#         steering_angle = self.process_image(birdseye_frame)

#         # Publish the drive command
#         self.publish_drive_command(steering_angle)

#         # Visualization (optional)
#         cv2.imshow("Bird's Eye View", birdseye_frame)
#         cv2.waitKey(1)

#     def process_image(self, image):
#         # Convert to grayscale
#         gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

#         # Apply Gaussian blur with a smaller kernel
#         blur = cv2.GaussianBlur(gray, (3, 3), 0)

#         # Edge detection with adjusted parameters
#         edges = cv2.Canny(blur, 50, 100)

#         # Detect lines using Hough Transform with optimized parameters
#         lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=50, minLineLength=30, maxLineGap=20)

#         left_lines = []
#         right_lines = []

#         if lines is not None:
#             for line in lines:
#                 x1, y1, x2, y2 = line[0]
#                 slope = (y2 - y1) / (x2 - x1) if x2 != x1 else np.inf

#                 if slope < 0:  # Left lane
#                     left_lines.append(line)
#                 elif slope > 0:  # Right lane
#                     right_lines.append(line)

#         left_lane_center = self.calculate_lane_center(left_lines, image, color=(0, 255, 0))
#         right_lane_center = self.calculate_lane_center(right_lines, image, color=(255, 0, 0))

#         # Handle the case where only one lane is detected
#         if left_lane_center is not None and right_lane_center is not None:
#             lane_center = (left_lane_center + right_lane_center) / 2
#         elif left_lane_center is not None:
#             lane_center = left_lane_center + self.lookahead_distance
#         elif right_lane_center is not None:
#             lane_center = right_lane_center - self.lookahead_distance
#         else:
#             lane_center = image.shape[1] // 2  # Default to center of the image

#         cv2.circle(image, (int(lane_center), image.shape[0]), 10, (0, 0, 255), -1)

#         # Calculate steering angle based on lane center
#         angle_to_lane_center = lane_center - image.shape[1] // 2
#         alpha = np.arctan2(angle_to_lane_center, self.lookahead_distance)

#         # Pure pursuit steering angle calculation
#         steering_angle = np.arctan2(2.0 * self.wheel_base_L * np.sin(alpha), self.lookahead_distance)
#         print(f"Steering Angle: {steering_angle}")
#         return steering_angle

#     def calculate_lane_center(self, lines, image, color=(0, 255, 0)):
#         if len(lines) == 0:
#             return None

#         x_coords = []
#         y_coords = []

#         for line in lines:
#             x1, y1, x2, y2 = line[0]
#             cv2.line(image, (x1, y1), (x2, y2), color, 2)
#             x_coords.extend([x1, x2])
#             y_coords.extend([y1, y2])

#         lane_center_x = np.mean(x_coords)
#         return lane_center_x

#     def publish_drive_command(self, steering_angle):
#         drive_msg = AckermannDriveStamped()
#         speed = 0.5

#         drive_msg.drive.steering_angle = steering_angle * 0.5
#         drive_msg.drive.speed = speed
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

#-------------------------------------------------------------------------------------------------------------------------------

# import rclpy
# from rclpy.node import Node
# from ackermann_msgs.msg import AckermannDriveStamped
# from sensor_msgs.msg import CompressedImage
# from cv_bridge import CvBridge
# import cv2
# import numpy as np

# class LaneKeepingNode(Node):
#     def __init__(self):
#         super().__init__('lane_keeping_node')
        
#         # Parameters for Pure Pursuit
#         self.lookahead_distance = 1.0  # Lookahead distance
#         self.wheelbase_length = 0.3    # Length of the wheelbase
#         self.speed = 1.0               # Speed of the vehicle

#         # Image processing
#         self.bridge = CvBridge()
#         self.subscriber = self.create_subscription(
#             CompressedImage,
#             '/image/left/image_compressed',
#             self.image_callback,
#             10)
        
#         # Publisher for driving commands
#         self.drive_publisher = self.create_publisher(
#             AckermannDriveStamped,
#             '/drive',
#             10)
    
#     def image_callback(self, msg):
#         # Convert ROS image to OpenCV format
#         image = self.bridge.compressed_imgmsg_to_cv2(msg)

#         image = self.crop_image(image)
        
#         # Process the image to detect lanes
#         lane_center = self.process_image(image)
        
#         # Calculate steering angle using Pure Pursuit
#         steering_angle = self.calculate_steering_angle(lane_center)
        
#         # Publish the driving command
#         self.publish_drive_command(steering_angle)

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

#     def process_image(self, image):
#         # Convert to grayscale
#         gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        
#         # Apply Gaussian Blur
#         blurred = cv2.GaussianBlur(gray, (5, 5), 0)
        
#         # Apply Canny Edge Detection
#         edges = cv2.Canny(blurred, 50, 150)
        
#         # Define region of interest (ROI) mask
#         mask = np.zeros_like(edges)
#         height, width = edges.shape
#         polygon = np.array([[
#             (0, height),
#             (width, height),
#             (width, int(height * 0.6)),
#             (0, int(height * 0.6))
#         ]], np.int32)
        
#         cv2.fillPoly(mask, polygon, 255)
#         masked_edges = cv2.bitwise_and(edges, mask)
        
#         # Hough Line Transform to detect lines
#         lines = cv2.HoughLinesP(masked_edges, 1, np.pi/180, 50, minLineLength=50, maxLineGap=150)
        
#         # Filter lines by slope
#         filtered_lines = []
#         if lines is not None:
#             for line in lines:
#                 x1, y1, x2, y2 = line[0]
#                 slope = (y2 - y1) / (x2 - x1 + 1e-6)  # Adding small value to avoid division by zero
                
#                 # Keep lines with slope indicating they are part of the lane (e.g., not horizontal or too vertical)
#                 if 0.5 < abs(slope) < 2.0:
#                     filtered_lines.append(line)
        
#         # Create an empty image to draw lines
#         line_image = np.zeros_like(image)
        
#         for line in filtered_lines:
#             x1, y1, x2, y2 = line[0]
#             cv2.line(line_image, (x1, y1), (x2, y2), (0, 255, 0), 5)
        
#         # Overlay the lines on the original image
#         combo_image = cv2.addWeighted(image, 0.8, line_image, 1, 0)
        
#         # Find the center of the detected lane
#         lane_center = self.find_lane_center(filtered_lines, width)
        
#         # Draw the lane center on the image
#         cv2.circle(combo_image, (int(lane_center), int(height * 0.8)), 10, (255, 0, 0), -1)
        
#         # Display the processed image
#         cv2.imshow("Lane Detection", combo_image)
#         cv2.waitKey(1)  # Add a small delay to allow the image to be rendered
        
#         return lane_center



    
#     def find_lane_center(self, lines, image_width):

#         if lines is None:
#             return image_width / 2  # Default to center if no lines are detected

#         left_lane = []
#         right_lane = []
#         for line in lines:
#             x1, y1, x2, y2 = line[0]
#             slope = (y2 - y1) / (x2 - x1)
#             intercept = y1 - slope * x1

#             if slope < 0:
#                 left_lane.append((slope, intercept))
#             else:
#                 right_lane.append((slope, intercept))

#         # if not left_lane and not right_lane:
#         #     # No lanes detected; return center
#         #     return image_width / 2

#         if not left_lane:
#             # Only right lane detected
#             right_lane_avg = np.mean(right_lane, axis=0)
#             y = image_width * 0.6
#             right_x = (y - right_lane_avg[1]) / right_lane_avg[0]
#             # Assume the vehicle should be to the left of the detected right lane
#             lane_center = right_x - self.wheelbase_length
#             return max(0, lane_center)  # Ensure the center does not go out of bounds

#         if not right_lane:
#             # Only left lane detected
#             left_lane_avg = np.mean(left_lane, axis=0)
#             y = image_width * 0.6
#             left_x = (y - left_lane_avg[1]) / left_lane_avg[0]
#             # Assume the vehicle should be to the right of the detected left lane
#             lane_center = left_x + self.wheelbase_length
#             return min(image_width, lane_center)  # Ensure the center does not go out of bounds

#         # Both lanes detected
#         left_lane_avg = np.mean(left_lane, axis=0)
#         right_lane_avg = np.mean(right_lane, axis=0)

#         # Calculate lane center
#         y = image_width * 0.6
#         left_x = (y - left_lane_avg[1]) / left_lane_avg[0]
#         right_x = (y - right_lane_avg[1]) / right_lane_avg[0]
#         lane_center = (left_x + right_x) / 2

#         return lane_center
    
#     def calculate_steering_angle(self, lane_center):
#         # Calculate the offset from the center of the image
#         image_center = 640 / 2  # Assuming 640x480 image resolution
#         offset = lane_center - image_center
        
#         # Calculate the steering angle using Pure Pursuit
#         steering_angle = np.arctan(2 * self.wheelbase_length * offset / (self.lookahead_distance**2))
        
#         return steering_angle
    
#     def publish_drive_command(self, steering_angle):
#         drive_msg = AckermannDriveStamped()
#         drive_msg.drive.speed = self.speed
#         drive_msg.drive.steering_angle = steering_angle
#         self.drive_publisher.publish(drive_msg)

# def main(args=None):
#     rclpy.init(args=args)
#     lane_keeping_node = LaneKeepingNode()
#     rclpy.spin(lane_keeping_node)
#     lane_keeping_node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
