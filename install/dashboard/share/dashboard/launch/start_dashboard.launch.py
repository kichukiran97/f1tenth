from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='dashboard',
            executable='dashboard-camera',
            name='dashboard_node'
        )
    ])
