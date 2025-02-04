from launch import LaunchDescription
from launch_ros.actions import Node
import os

def generate_launch_description():
    # Path to your URDF
    urdf_path = os.path.join(
        get_package_share_directory('my_robot_package'),
        'urdf', 'my_robot_full.urdf'
    )

    return LaunchDescription([
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_my_robot',
            output='screen',
            arguments=[
                '-entity', 'my_robot',
                '-file', urdf_path,
                '-robot_namespace', 'my_robot_namespace'
            ]
        ),
        Node(
            package='gazebo_ros',
            executable='gzserver',
            name='gazebo_server',
            output='screen',
        ),
        Node(
            package='gazebo_ros',
            executable='gzclient',
            name='gazebo_client',
            output='screen',
        )
    ])

