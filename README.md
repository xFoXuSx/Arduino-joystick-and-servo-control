🎮 Arduino Joystick Controlled Servo System with Buzzer

This project uses an analog joystick to control two servo motors (horizontal and vertical movement) and a buzzer that activates when the joystick button is pressed. It’s a simple and effective way to learn joystick input handling, servo control, and digital outputs using Arduino.

🚀 Features

🎯 Dual-axis joystick control

🔄 Two servo motors (X and Y movement)

🔔 Buzzer activated by joystick button

⚡ Smooth servo movement using analog mapping

🧠 Beginner-friendly Arduino project

🛠️ Components Used

Arduino Uno (or compatible)

Analog Joystick Module

2× Servo Motors (SG90 or similar)

Buzzer

Jumper wires

Breadboard

USB cable

🔌 Pin Configuration
Component	Arduino Pin
Joystick X-axis	A0
Joystick Y-axis	A1
Joystick Button (SW)	D2
Servo Motor 1	D7
Servo Motor 2	D8
Buzzer	D9
VCC	5V
GND	GND
⚙️ How It Works

The joystick’s X-axis controls the first servo motor

The joystick’s Y-axis controls the second servo motor

Joystick values are mapped from 0–1023 to 0–180 degrees

A small dead zone prevents jitter when the joystick is centered

Pressing the joystick button activates the buzzer

Releasing the button turns the buzzer off

💻 Code Overview

Uses the Servo.h library

analogRead() reads joystick movement

map() converts joystick values to servo angles

tone() and noTone() control the buzzer

INPUT_PULLUP is used for the joystick button

▶️ How to Use

Connect the components according to the pin table

Open the code in Arduino IDE

Select the correct Board and Port

Upload the sketch to the Arduino

Move the joystick to control the servos

Press the joystick button to activate the buzzer



🔧 Possible Improvements

Limit servo angle range for safety

Add LCD or OLED display

Replace buzzer with LED or relay

Add Bluetooth or WiFi control

Improve dead-zone calibration

📜 License

This project is open-source and available under the MIT License.

👤 Author

Mahdi darbaj

GitHub: @mahdidarbaj-cmd
