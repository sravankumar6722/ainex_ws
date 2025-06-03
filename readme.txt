# Ainex Dual 3DOF Hands ROS2 Project

## Overview

This project implements real-time control and visualization of two 3-DOF robotic hands (left and right) for the Ainex robot using ROS 2. It includes:
- A main control node (`hand_node.py`) for both hands.
- Excel-based gesture definitions for right and left hands (e.g., wave, salute).
- A URDF model (`basic_arm.urdf`) for visualization in RViz.
- Topics for command, feedback, and joint state publishing.
- Ready for future expansion (head, legs, etc.).

---

## Workspace and Package Setup

### 1. Create the ROS 2 Workspace

```bash
mkdir -p ainex_ws/src
cd ainex_ws
```

### 2. Create the Package

```bash
ros2 pkg create --build-type ament_python ainex_arm
```

### 3. Build the Workspace

```bash
cd ~/ainex_ws
colcon build
```

---

## Project Structure

- `ainex_ws/src/ainex_arm/ainex_arm/hand_node.py`  
  Main ROS 2 node for controlling the hands.
- `ainex_ws/src/ainex_arm/urdf/basic_arm.urdf`  
  URDF model for both hands (left and right).
- `ainex_ws/src/ainex_arm/ainex_sheets/`  
  Excel files defining gestures for each hand (e.g., `wave_sheet.xlsx`, `salute_sheet.xlsx`).

---

## How to Run

### 1. Launch the Hand Node

Open a terminal and run:

```bash
ros2 run ainex_arm hand_node --ros-args -p hand:=left
```
or for the right hand:
```bash
ros2 run ainex_arm hand_node --ros-args -p hand:=right
```

You can run both nodes in separate terminals for dual-arm control.

### 2. Send Gesture Commands

Open another terminal and publish a gesture command:

```bash
ros2 topic pub --once hand_action std_msgs/String "{data: 'wave'}"
ros2 topic pub --once hand_action std_msgs/String "{data: 'salute'}"
ros2 topic pub --once left_hand_action std_msgs/String "{data: 'left_wave'}"
ros2 topic pub --once left_hand_action std_msgs/String "{data: 'left_salute'}"
```

Available gestures (by default):
- `wave`
- `salute`
- `left_wave`
- `left_salute`

### 3. Visualize in RViz

- Load the `basic_arm.urdf` in RViz to visualize the robot and see real-time joint states as you run gestures.

---

## Topics

| Topic Name                | Type                | Description                                 |
|---------------------------|---------------------|---------------------------------------------|
| `/hand_action`            | `std_msgs/String`   | Command gestures for the right hand         |
| `/hand_action_result`     | `std_msgs/String`   | Result/feedback from right hand node        |
| `/left_hand_action`       | `std_msgs/String`   | Command gestures for the left hand          |
| `/left_hand_action_result`| `std_msgs/String`   | Result/feedback from left hand node         |
| `/servo_angles`           | `std_msgs/Float32MultiArray` | Current angles of right hand servos |
| `/left_servo_angles`      | `std_msgs/Float32MultiArray` | Current angles of left hand servos  |
| `/joint_states`           | `sensor_msgs/JointState`     | All joint states for RViz/robot_state_publisher |

---

## Notes

- **Excel Sheets:** Place gesture Excel files in `ainex_ws/src/ainex_arm/ainex_sheets/`. Each file should have columns: `Servo1`, `Servo2`, `Servo3`, and optionally `Delay`.
- **URDF:** The URDF supports both left and right hands. Make sure joint names in your code and URDF match.
- **Future Expansion:** The project is structured for easy addition of head, legs, or other modules.

---

## Example Workflow

1. Build the workspace:  
   `colcon build`
2. Source the workspace:  
   `source install/setup.bash`
3. Run the left and right hand nodes in separate terminals.
4. Send gesture commands as shown above.
5. Visualize in RViz.

---

## Troubleshooting

- If RViz shows flickering or snapping, ensure both arms' joint states are always published together.
- If gestures do not execute, check the Excel file path and format.

---

**Enjoy controlling your Ainex robot's hands!**