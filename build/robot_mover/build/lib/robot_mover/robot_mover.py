# import rclpy
# from rclpy.node import Node
# from geometry_msgs.msg import PoseStamped, Pose, Point
# from ackermann_msgs.msg import AckermannDriveStamped
# from tf_transformations import euler_from_quaternion
# import math
# import numpy as np

# class MoveToGoal(Node):
#     def __init__(self):
#         super().__init__('move_to_goal')
        
#         # Subscription to the goal topic
#         self.goal_subscription = self.create_subscription(
#             PoseStamped,
#             '/goal_pose',
#             self.goal_callback,
#             10)
        
#         # Subscription to the pose topic
#         self.pose_subscription = self.create_subscription(
#             PoseStamped,
#             '/pf/viz/inferred_pose',
#             self.pose_callback,
#             10)

#         # Publisher for the drive commands
#         self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)
        
#         self.current_goal = None
#         self.current_pose = None
#         self.path = []

#     def goal_callback(self, msg):
#         self.get_logger().info(f'Goal received: {msg.pose}')
#         self.current_goal = msg.pose
#         if self.current_pose:
#             self.path = self.plan_path(self.current_pose, self.current_goal)

#     def pose_callback(self, msg):
#         self.current_pose = msg.pose

#     def move_to_goal(self):
#         if self.current_goal is None or self.current_pose is None or not self.path:
#             return

#         current_x = self.current_pose.position.x
#         current_y = self.current_pose.position.y

#         waypoint = self.path[0]
#         goal_x, goal_y = waypoint[0], waypoint[1]

#         # Compute distance to the next waypoint
#         distance = math.sqrt((goal_x - current_x)**2 + (goal_y - current_y)**2)
#         if distance < 0.1:
#             self.path.pop(0)
#             if not self.path:
#                 self.get_logger().info('Goal reached!')
#                 return

#         # Get current orientation
#         orientation_q = self.current_pose.orientation
#         _, _, current_yaw = euler_from_quaternion([
#             orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w])

#         # Compute angle to the next waypoint
#         angle_to_goal = math.atan2(goal_y - current_y, goal_x - current_x)
#         steering_angle = angle_to_goal - current_yaw

#         # Cap the speed for safety
#         speed = min(1.0, distance)

#         # Publish the drive command
#         drive_msg = AckermannDriveStamped()
#         drive_msg.drive.speed = speed
#         drive_msg.drive.steering_angle = steering_angle
#         self.drive_publisher.publish(drive_msg)

#     def plan_path(self, start, goal):
#         def distance(p1, p2):
#             return math.sqrt((p1.x - p2.x)**2 + (p1.y - p2.y)**2)
        
#         def steer(from_node, to_node, extend_length=float('inf')):
#             direction = np.arctan2(to_node.y - from_node.y, to_node.x - from_node.x)
#             dist = distance(from_node, to_node)
#             dist = min(dist, extend_length)
#             new_node = Pose()
#             new_node.position.x = from_node.x + dist * np.cos(direction)
#             new_node.position.y = from_node.y + dist * np.sin(direction)
#             # Do not set z as it's not needed for 2D path planning
#             return new_node

#         def is_collision_free(node):
#             # Placeholder for collision detection logic
#             # Implement your collision checking here
#             return True

#         start_node = start.position
#         goal_node = goal.position

#         tree = [start_node]
#         for _ in range(1000):  # Number of iterations
#             rand_node = Pose()
#             rand_node.position.x = np.random.uniform(-10, 10)
#             rand_node.position.y = np.random.uniform(-10, 10)
#             nearest_node = min(tree, key=lambda n: distance(n, rand_node.position))
#             new_node = steer(nearest_node, rand_node.position)
#             if is_collision_free(new_node):
#                 tree.append(new_node.position)
#                 if distance(new_node.position, goal_node) < 0.5:
#                     break
        
#         path = [goal_node]
#         current_node = goal_node
#         while distance(current_node, start_node) > 1.0:
#             current_node = min(tree, key=lambda n: distance(n, current_node))
#             path.append(current_node)
#         path.reverse()
#         return [(p.x, p.y) for p in path]

# def main(args=None):
#     rclpy.init(args=args)
#     node = MoveToGoal()
#     try:
#         while rclpy.ok():
#             rclpy.spin_once(node)
#             node.move_to_goal()
#     except KeyboardInterrupt:
#         pass
#     finally:
#         node.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from ackermann_msgs.msg import AckermannDriveStamped
from tf_transformations import euler_from_quaternion
import math

class MoveToGoal(Node):
    def __init__(self):
        super().__init__('move_to_goal')
        
        # Subscription to the goal topic
        self.goal_subscription = self.create_subscription(
            PoseStamped,
            '/goal_pose',
            self.goal_callback,
            10)
        
        # Subscription to the pose topic
        self.pose_subscription = self.create_subscription(
            PoseStamped,
            '/pf/viz/inferred_pose',
            self.pose_callback,
            10)

        # Publisher for the drive commands
        self.drive_publisher = self.create_publisher(AckermannDriveStamped, '/drive', 10)
        
        self.current_goal = None
        self.current_pose = None

    def goal_callback(self, msg):
        self.get_logger().info(f'Goal received: {msg.pose}')
        self.current_goal = msg.pose

    def pose_callback(self, msg):
        self.current_pose = msg.pose

    def move_to_goal(self):
        if self.current_goal is None or self.current_pose is None:
            return

        goal_x = self.current_goal.position.x
        goal_y = self.current_goal.position.y

        # Get current position
        current_x = self.current_pose.position.x
        current_y = self.current_pose.position.y

        # Compute distance to the goal
        distance = math.sqrt((goal_x - current_x)**2 + (goal_y - current_y)**2)
        if distance < 0.1:
            self.get_logger().info('Goal reached!')
            return

        # Get current orientation
        orientation_q = self.current_pose.orientation
        _, _, current_yaw = euler_from_quaternion([
            orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w])

        # Compute angle to the goal
        angle_to_goal = math.atan2(goal_y - current_y, goal_x - current_x)
        steering_angle = angle_to_goal - current_yaw

        # Cap the speed for safety
        speed = min(0.4, distance)

        # Publish the drive command
        drive_msg = AckermannDriveStamped()
        drive_msg.drive.speed = speed
        drive_msg.drive.steering_angle = steering_angle
        self.drive_publisher.publish(drive_msg)

def main(args=None):
    rclpy.init(args=args)
    node = MoveToGoal()
    try:
        while rclpy.ok():
            rclpy.spin_once(node)
            node.move_to_goal()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

