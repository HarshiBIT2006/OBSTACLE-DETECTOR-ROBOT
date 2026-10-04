# OBSTACLE-DETECTOR-ROBOT
An Arduino Uno based obstacle-avoiding robot that detects obstacles using two IR sensors and automatically changes its direction.

## Project Overview

This project uses an Arduino Uno, two IR obstacle sensors, two DC motors, a motor driver, and a robot chassis.

When an obstacle is detected, the robot:

1. Stops.
2. Moves backward.
3. Stops.
4. Turns right.
5. Continues moving forward.

The process repeats continuously while the robot is operating.

## Components Used

- Arduino Uno
- 2 × IR Obstacle Sensors
- 2 × DC Motors
- Motor Driver
- Robot Chassis
- Battery
- Jumper Wires

## Pin Configuration

| Component | Arduino Pin |
|---|---|
| Left IR Sensor | A0 |
| Right IR Sensor | A1 |
| Motor Driver IN1 | D2 |
| Motor Driver IN2 | D3 |
| Motor Driver IN3 | D4 |
| Motor Driver IN4 | D5 |

## Working Principle

The two IR sensors continuously monitor the area in front of the robot.

When no obstacle is detected, both motors rotate in the forward direction.

When either IR sensor detects an obstacle:


Obstacle Detected
       ↓
     STOP
       ↓
 Move Backward
       ↓
     STOP
       ↓
   Turn Right
       ↓
 Move Forward
       ↓
     Repeat
```

## Software

The robot is programmed using the Arduino IDE.

### Main Functions

- `moveForward()` – moves the robot forward
- `moveBackward()` – moves the robot backward
- `turnRight()` – turns the robot to the right
- `stopRobot()` – stops both motors

## Code

The Arduino source code is available in:

```text
obstacle_avoiding_robot.ino
```

## Applications

- Basic autonomous robotics
- Obstacle avoidance demonstrations
- Arduino robotics projects
- Embedded systems learning
- Robot navigation experiments

## Future Improvements

Possible improvements include:

- Ultrasonic distance sensor
- Servo-mounted sensor
- Bluetooth control
- Automatic left/right path selection
- Speed control using PWM
- More advanced navigation algorithms
- Mapping and localization

## Author
Aditi Bhatnagar

ECE Student | Embedded Systems & Robotics

---

⭐ If you find this project useful, consider giving the repository a star!
