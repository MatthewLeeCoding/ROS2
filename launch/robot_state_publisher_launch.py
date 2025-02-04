import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Optionally declare arguments for flexibility
        DeclareLaunchArgument('model', default_value='urdf/your_robot_model.urdf', description="Path to robot URDF file"),
        
        # Robot State Publisher Node
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': '$(find your_package)/urdf/your_robot_model.urdf'}],
        ),
    ])

