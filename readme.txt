# Ainex Dual 3DOF Hands ROS2 Project

## Overview

This project implements real-time control and visualization of two 3-DOF robotic hands (left and right) for the Ainex robot using ROS 2. It now features:
- A central control node (`hand_node.py`) that can control the right, left, or both hands using a single parameter.
- Excel-based gesture definitions for right, left, and both hands (e.g., wave, salute, both_hands_point).
- A URDF model (`basic_arm.urdf` or `robot2.urdf`) for visualization in RViz.
- Topics, services, and actions for command, feedback, and joint state publishing.
- A separate `ainex_interfaces` package for all custom ROS 2 interfaces (services and actions).
- Ready for future expansion (head, legs, etc.)

-----------------------| Workspace and Package Setup |----------------------------

### 1. Create the ROS 2 Workspace

```bash
mkdir -p ainex_ws/src
cd ainex_ws
```

### 2. Create the Packages

```bash
ros2 pkg create --build-type ament_python ainex_arm
ros2 pkg create --build-type ament_cmake ainex_interfaces
```

### 3. Add Custom Interfaces

- Place your `.srv` files (e.g., `MoveHand.srv`, `RunGesture.srv`, `SetServoParam.srv`) and `.action` files (e.g., `ExecuteGesture.action`) in `ainex_ws/src/ainex_interfaces/srv/` and `ainex_ws/src/ainex_interfaces/action/` respectively.
- Update `CMakeLists.txt` and `package.xml` in `ainex_interfaces` as per ROS 2 interface conventions.

### 4. Build the Workspace

```bash
cd ~/ainex_ws
colcon build
source install/setup.bash
```

------------------------------| Project Structure |--------------------------------------

- `ainex_ws/src/ainex_arm/ainex_arm/hand_node.py`  
  Main ROS 2 node for controlling the hands, supporting topic, service, and action-based gesture execution.
- `ainex_ws/src/ainex_arm/urdf/basic_arm.urdf` or `robot2.urdf`  
  URDF model for both hands (left and right).
- `ainex_ws/src/ainex_arm/ainex_sheets/`  
  Excel files defining gestures for each hand or both hands (e.g., `wave_sheet.xlsx`, `both_hands_point_sheet.xlsx`).
- `ainex_ws/src/ainex_interfaces/srv/`  
  Custom service definitions for hand control and gesture execution.
- `ainex_ws/src/ainex_interfaces/action/`  
  Custom action definitions for long-running gesture execution.

-----------------------------------| How to Run |-----------------------------

### 1. Launch the Hand Node

Open a terminal and run (choose one):

```bash
ros2 run ainex_arm hand_node --ros-args -p hand:=left
ros2 run ainex_arm hand_node --ros-args -p hand:=right
ros2 run ainex_arm hand_node --ros-args -p hand:=both
```

You can run multiple nodes in separate terminals for independent or synchronized control.

### 2. Send Gesture Commands (Topic)

Open another terminal and publish a gesture command:

```bash
ros2 topic pub --once hand_action std_msgs/String "{data: 'wave'}"
ros2 topic pub --once left_hand_action std_msgs/String "{data: 'left_wave'}"
ros2 topic pub --once both_hands_action std_msgs/String "{data: 'both_hands_point'}"
```

### 3. Move Hand(s) to Specific Angles via Service

```bash
ros2 service call /move_hand ainex_interfaces/srv/MoveHand "{angles: [10, 20, 30]}"
ros2 service call /move_hand ainex_interfaces/srv/MoveHand "{angles: [10, 20, 30, 40, 50, 60]}"
```
- Use 3 angles for right/left, 6 for both.

### 4. Run a Gesture by Name via Service

```bash
ros2 service call /run_gesture ainex_interfaces/srv/RunGesture "{gesture_name: 'wave'}"
```

### 5. set parameters while running via Service

```bash
ros2 service call /set_motion_params ainex_interfaces/srv/SetMotionParams "{speed: 1000, acceleration: 240, step_degree: 10}"
```


### 6. Run a Gesture by Name via Action

```bash
ros2 action send_goal /execute_gesture ainex_interfaces/action/ExecuteGesture "{gesture_name: 'wave'}"
```
------------------------------| Topics, Services, and Actions |-----------------------------


| Name                        | Type                                   | Description                                  |
|-----------------------------|----------------------------------------|----------------------------------------------|
| `/hand_action`              | `std_msgs/String`                      | Command gestures for the right hand          |
| `/hand_action_result`       | `std_msgs/String`                      | Result/feedback from right hand node         |
| `/left_hand_action`         | `std_msgs/String`                      | Command gestures for the left hand           |
| `/left_hand_action_result`  | `std_msgs/String`                      | Result/feedback from left hand node          |
| `/both_hands_action`        | `std_msgs/String`                      | Command gestures for both hands              |
| `/both_hands_action_result` | `std_msgs/String`                      | Result/feedback from both hands node         |
| `/servo_angles`             | `std_msgs/Float32MultiArray`           | Current angles of right hand servos          |
| `/left_servo_angles`        | `std_msgs/Float32MultiArray`           | Current angles of left hand servos           |
| `/both_servo_angles`        | `std_msgs/Float32MultiArray`           | Current angles of both hands servos          |
| `/joint_states`             | `sensor_msgs/JointState`               | All joint states for RViz/robot_state_publisher |
| `/move_hand`                | `ainex_interfaces/srv/MoveHand`        | Service to move hand(s) to specific angles   |
| `/run_gesture`              | `ainex_interfaces/srv/RunGesture`      | Service to execute a gesture by name         |
| `/execute_gesture`          | `ainex_interfaces/action/ExecuteGesture`| Action to execute a gesture with feedback    |

----------------------------------------| Notes |-------------------


- **Excel Sheets:** Place gesture Excel files in `ainex_ws/src/ainex_arm/ainex_sheets/`. Each file should have columns: `Servo1`, `Servo2`, `Servo3`, and optionally `Delay`. For both hands, use `Servo1` to `Servo6`.
- **URDF:** The URDF supports both left and right hands. Make sure joint names in your code and URDF match.
- **Services:** Use `/move_hand` for direct angle control and `/run_gesture` for gesture execution from Excel files.
- **Actions:** Use `/execute_gesture` for long-running gestures with feedback and cancel support.
- **Future Expansion:** The project is structured for easy addition of head, legs, or other modules.

--------------------------------------| Example Workflow |------------------

1. Build the workspace:  
   `colcon build`
2. Source the workspace:  
   `source install/setup.bash`
3. Run the hand node(s) with the desired parameter.
4. Send gesture commands via topic, service, or action as shown above.
5. Visualize in RViz.

---------------------------------- |Commands |------------------------------------

For right hand:
ros2 run ainex_arm hand_node --ros-args -p hand:=right

For left hand:
ros2 run ainex_arm hand_node --ros-args -p hand:=left

For both hands:
ros2 run ainex_arm hand_node --ros-args -p hand:=both

Topic
ros2 topic pub --once hand_action std_msgs/String "{data: 'wave'}"
ros2 topic pub --once left_hand_action std_msgs/String "{data: 'left_wave'}"
ros2 topic pub --once both_hands_action std_msgs/String "{data: 'both_hands_point'}"

Service:
ros2 service call /move_hand ainex_interfaces/srv/MoveHand "{angles: [10, 20, 30]}"
ros2 service call /move_hand ainex_interfaces/srv/MoveHand "{angles: [10, 20, 30, 40, 50, 60]}"
ros2 service call /run_gesture ainex_interfaces/srv/RunGesture "{gesture_name: 'wave'}"
ros2 service call /set_motion_params ainex_interfaces/srv/SetMotionParams "{speed: 1000, acceleration: 240, step_degree: 10}"

Action:
ros2 action send_goal /execute_gesture ainex_interfaces/action/ExecuteGesture "{gesture_name: 'wave'}"

-------------------| Troubleshooting |----------------


- If RViz shows flickering or snapping, ensure both arms' joint states are always published together.
- If gestures do not execute, check the Excel file path and format.
- If services or actions are not found, ensure you have sourced the workspace and that the interface package is built.
- For action errors about `rclpy.sleep`, use `await asyncio.sleep(...)` in your code.

-------------------------------------------------

**Enjoy controlling your Ainex robot's hands!**