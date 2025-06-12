Ainex Dual 3DOF Hands ROS2 Project
Overview
This project implements real-time control and visualization of two 3-DOF robotic hands (both hands, always synchronized) for the Ainex robot using ROS 2. It now features:

A unified control node (hand_node.py) that always controls both hands together (no hand parameter needed).
Excel-based gesture definitions for both hands (e.g., wave, both_hands_point).
A URDF model (robot2.urdf) for visualization in RViz.
Topics, services, and actions for command, feedback, and joint state publishing.
A separate ainex_interfaces package for all custom ROS 2 interfaces (services and actions).
Launch file support for starting all components and visualization together.
Ready for future expansion (head, legs, etc.)
-----------------------| Workspace and Package Setup |----------------------------

Create the ROS 2 Workspace

mkdir -p ainex_ws/src cd ainex_ws

Create the Packages

ros2 pkg create --build-type ament_python ainex_arm ros2 pkg create --build-type ament_cmake ainex_interfaces

Add Custom Interfaces

Place your .srv files (e.g., MoveHand.srv, RunGesture.srv, SetMotionParams.srv) and .action files (e.g., ExecuteGesture.action) in ainex_ws/src/ainex_interfaces/srv/ and ainex_ws/src/ainex_interfaces/action/ respectively.
Update CMakeLists.txt and package.xml in ainex_interfaces as per ROS 2 interface conventions.
Update CMakeLists.txt and package.xml in ainex_interfaces as per ROS 2 interface conventions.
Build the Workspace

cd ~/ainex_ws colcon build source setup.bash

------------------------------| Project Structure |--------------------------------------

ainex_ws/src/ainex_arm/ainex_arm/hand_node.py
Main ROS 2 node for controlling both hands, supporting topic, service, and action-based gesture execution.
ainex_ws/src/ainex_arm/urdf/robot2.urdf
URDF model for both hands.
ainex_ws/src/ainex_arm/ainex_sheets/
Excel files defining gestures for both hands (e.g., wave_sheet.xlsx, both_hands_point_sheet.xlsx).
ainex_ws/src/ainex_interfaces/srv/
Custom service definitions for hand control and gesture execution.
ainex_ws/src/ainex_interfaces/action/
Custom action definitions for long-running gesture execution.
ainex_ws/src/ainex_arm/launch/hand_node.launch.py
Launch file to start the node, robot_state_publisher, joint_state_publisher_gui, and RViz with robot model.

-----------------------------------| How to Run |-----------------------------

Launch Everything (Node, URDF, RViz, GUI)

ros2 launch ainex_arm hand_node.launch.py

This starts:

The hand_node controlling both hands
The joint_state_publisher_gui for interactive control
The robot_state_publisher with your URDF
RViz with the robot model, TF, and fixed frame set (if you use a custom RViz config)
Send Gesture Commands (Topic)

ros2 topic pub --once both_hands_action std_msgs/String "{data: 'both_hands_point'}"

Move Both Hands to Specific Angles via Service

ros2 service call /move_hand ainex_interfaces/srv/MoveHand "{angles: [10, 20, 30, 40, 50, 60]}"

Run a Gesture by Name via Service

ros2 service call /run_gesture ainex_interfaces/srv/RunGesture "{gesture_name: 'wave'}"

Set Motion Parameters via Service

ros2 service call /set_motion_params ainex_interfaces/srv/SetMotionParams "{speed: 1000, acceleration: 240, step_degree: 10, torque: true}"

Run a Gesture by Name via Action

ros2 action send_goal /execute_gesture ainex_interfaces/action/ExecuteGesture "{gesture_name: 'wave'}"


------------------------------| Topics, Services, and Actions |-----------------------------
__________________________________________________________________________________________________________________________
Name	                    |      Type	Description                     |                                                   |
------------------------------------------------------------------------------------------------------------------------  |
/both_hands_action	      |  std_msgs/String	                        |  Command gestures for both hands                  |
/both_hands_action_result | std_msgs/String	                          | Result/feedback from both hands node              |
/both_servo_angles	      |   std_msgs/Float32MultiArray	            |  Current angles of both hands servos              |
/joint_states	            |   sensor_msgs/JointState	                |  All joint states for RViz/robot_state_publisher  |
/move_hand	              |        ainex_interfaces/srv/MoveHand	    |  Service to move both hands to specific angles    |
/run_gesture	            |        ainex_interfaces/srv/RunGesture	  |  Service to execute a gesture by name             |
/set_motion_params	      |       ainex_interfaces/srv/SetMotionParams|	Service to set speed, acceleration, step, torque  |
/get_servo_status	        |      ainex_interfaces/srv/GetServoStatus	|  Service to get current servo status              |
/execute_gesture	        |    ainex_interfaces/action/ExecuteGesture	|  Action to execute a gesture with feedback        |
_________________________________________________________________________________________________________________________ |

----------------------------------------| Notes |-------------------

Excel Sheets: Place gesture Excel files in ainex_ws/src/ainex_arm/ainex_sheets/. Each file should have columns: Servo1 to Servo6, and optionally Delay.
URDF: The URDF supports both hands. Make sure joint names in your code and URDF match.
Services: Use /move_hand for direct angle control and /run_gesture for gesture execution from Excel files.
Actions: Use /execute_gesture for long-running gestures with feedback and cancel support.
RViz: Use a custom RViz config to automatically load the robot model, set /robot_description, and set the fixed frame to left_leg_link.
Future Expansion: The project is structured for easy addition of head, legs, or other modules.
--------------------------------------| Example Workflow |------------------

Build the workspace:
colcon build
Source the workspace:
source setup.bash
Launch everything:
ros2 launch ainex_arm hand_node.launch.py
Send gesture commands via topic, service, or action as shown above.
Visualize and interact in RViz.

-------------------| Troubleshooting |----------------

If RViz does not show the robot, ensure robot_state_publisher is running and /robot_description is set.
If gestures do not execute, check the Excel file path and format.
If services or actions are not found, ensure you have sourced the workspace and that the interface package is built.
For action errors about rclpy.sleep, use await asyncio.sleep(...) in your code.
If RViz shows flickering or snapping, ensure both arms' joint states are always published together.