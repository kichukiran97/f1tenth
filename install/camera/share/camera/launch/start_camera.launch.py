from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    input_type = LaunchConfiguration('camera_type', default='native')
    # TODO: This is wrong
    # should be like: input_type = context.launch_configurations.get('input_type', 'real')  # Default to 'real'

    # camera_executable = ("start_camera.py" if input_type == "native" else "simulate_camera.py")
    camera_executable = "start_camera.py"

    return LaunchDescription([
        Node(
            package='camera',
            executable="start_shm_manager.py",
            name='shm_manager_node'
        ),
        Node(
            package='camera',
            executable=camera_executable,
            name='camera_node'
        )
    ])
