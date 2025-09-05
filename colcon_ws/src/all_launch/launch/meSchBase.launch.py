import os

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource



def generate_launch_description():

    # launch the base meSch 
    meSch_base_node = Node(
        name="meSch_base_node",
        executable="meSch_central_node",
        package="meSch_base"
        )

    # launch the setpoint publisher 
    rover_pub_node = Node(
        name="rover_setpoint_pub_node",
        executable="meSch_roversp_node",
        package="meSch_base",
        )

    nodes = [
            meSch_base_node
            # rover_pub_node
            ]

    return LaunchDescription(nodes)