from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    urdf_path  = '/home/vgi/ainex_ws/src/ainex_arm/urdf/robot2.urdf'
    with open(urdf_path, 'r') as infp:
        robot_description = infp.read()
    return LaunchDescription([
        Node(
            package='ainex_arm',
            executable='hand_node',
            name='hand_node',
            output='screen'
        ),
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui',
            output='screen'
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': robot_description}]
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', '/home/vgi/ainex_ws/src/ainex_arm/rviz/hand_view.rviz']
        )

    ])