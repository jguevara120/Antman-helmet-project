# Antman Helmet Project

## Overview
This project is a wearable helmet system controlled by an Arduino. It uses servos to open and close the mask and LEDs for visual feedback.

## Features
- Dual servo control for mask movement
- LED indicators (on when closed, off when open)
- Button-controlled operation

## Components
- Arduino Nano
- 2x Servo motors
- LEDs + resistors (220 ohms)
- Power supply

## Challenges
- Servos initially had delay issues
- Constant motor noise due to holding position

## Solutions
- Simplified code to synchronize servo movement
- Adjusted servo angles and logic timing

## Future Improvements
- Add wireless control (ESP32)
- Smoother servo motion
- Battery integration into helmet

