# #!/usr/bin/env python3

# import rclpy
# from rclpy.node import Node
# from internal_interface.msg import LookAheadPoint
# from geometry_msgs.msg import PointStamped, PoseStamped
# from ackermann_msgs.msg import AckermannDriveStamped
# import math

# class PurePursuit(Node):
#     def __init__(self):
#         super().__init__('pure_pursuit')

#         self.control_pub = self.create_publisher(AckermannDriveStamped, '/drive', 10)
#         self.look_ahead_point_sub = self.create_subscription(PointStamped, 'control/look_ahead_point', self.look_ahead_cb, 10)
#         self.vehicle_pose_sub = self.create_subscription(PoseStamped, '/odom', self.pose_cb, 10)
        

#         self.look_ahead_point = None
#         self.vehicle_pose = None
#         self.Ld = 1.0  # Look-ahead distance

#     def look_ahead_cb(self, msg):
#         self.look_ahead_point = msg.point

#     def pose_cb(self, msg):
#         self.vehicle_pose = msg.pose
#         self.compute_control()

#     def compute_control(self):
#         if self.look_ahead_point is None or self.vehicle_pose is None:
#             return

#         # Calculate the transformation of the look-ahead point to the vehicle's coordinate frame
#         dx = self.look_ahead_point.x - self.vehicle_pose.position.x
#         dy = self.look_ahead_point.y - self.vehicle_pose.position.y

#         yaw = self.get_yaw_from_quaternion(self.vehicle_pose.orientation)
#         local_x = math.cos(yaw) * dx + math.sin(yaw) * dy
#         local_y = -math.sin(yaw) * dx + math.cos(yaw) * dy

#         # Calculate the curvature
#         if local_x != 0:
#             curvature = (2 * local_y) / (local_x**2 + local_y**2)
#             steering_angle = math.atan(curvature * self.Ld)
#         else:
#             steering_angle = 0.0

#         # Publish the control command
#         control_cmd = AckermannDriveStamped()
#         control_cmd.drive.speed = 1.0  # Set a constant speed
#         control_cmd.drive.steering_angle = steering_angle
#         print(steering_angle)
#         self.control_pub.publish(control_cmd)

#     def get_yaw_from_quaternion(self, q):
#         return math.atan2(2.0 * (q.w * q.z + q.x * q.y), 1.0 - 2.0 * (q.y * q.y + q.z * q.z))

# def main(args=None):
#     rclpy.init(args=args)
#     pure_pursuit_node = PurePursuit()
#     rclpy.spin(pure_pursuit_node)
#     pure_pursuit_node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from internal_interface.msg import LookAheadPoint
from ackermann_msgs.msg import AckermannDriveStamped
import math

class PurePursuit(Node):
    def __init__(self):
        super().__init__('pure_pursuit')

        self.look_ahead_distance_sub = self.create_subscription(LookAheadPoint, 'control/look_ahead_point', self.look_ahead_distance_cb, 10)
        self.control_pub = self.create_publisher(AckermannDriveStamped, '/drive', 10)

        self.look_ahead_distance = 1.0  # Default look-ahead distance
        self.alpha = 0.0  # Default angle
        self.wheel_base = 0.255

    def look_ahead_distance_cb(self, msg):
        self.look_ahead_distance = msg.look_ahead_distance
        self.alpha = msg.alpha
        self.compute_control()
        

    def compute_control(self):
        # Calculate the steering angle
        steering_angle = math.atan2(2 * self.wheel_base * math.sin(self.alpha), self.look_ahead_distance)
        print("Steering Angle = ", steering_angle)
        # Publish the control command
        control_cmd = AckermannDriveStamped()
        control_cmd.drive.speed = 0.5  # Set a constant speed
        control_cmd.drive.steering_angle = steering_angle
        self.control_pub.publish(control_cmd)

def main(args=None):
    rclpy.init(args=args)
    pure_pursuit_node = PurePursuit()
    rclpy.spin(pure_pursuit_node)
    pure_pursuit_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
