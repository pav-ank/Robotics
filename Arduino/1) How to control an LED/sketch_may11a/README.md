# My First Arduino Project - LED Morse Code
Welcome to my first ever Arduino project! In this project, I am diving into the world of robotics and electronics. As part of my journey, I created a simple LED blink that experiments with SOS Morse code.

## Project Overview
This project demonstrates how to use an Arduino to blink an LED in Morse code. Specifically, the message being sent is SOS (the international distress signal), which is a combination of dots and dashes.

-->This is just the beginning of my robotics adventure, and I’ll keep exploring, learning, and building new projects.

## Equipment Used
1) Arduino Uno (or similar Arduino board)
2) Red LED
3) 220Ω Resistor
4) Jumper wires
5) Breadboard
6) USB cable (for powering Arduino and uploading the code)

## How It Works
The LED blinks SOS in Morse code:
S = dot dot dot
O = dash dash dash
S = dot dot dot

The timing for the dots and dashes is as follows:
* Dot = 100ms
* Dash = 750ms
* Short space between signals = 100ms
* Long space between letters = 2000ms

**The LED will blink out this pattern indefinitely until the Arduino is powered off.**

## How to Run It
* Set up your components on a breadboard.
* Connect your LED to pin 8 of the Arduino and use a 220Ω resistor in series to limit the current to the LED.
* Upload the provided Arduino code to your board.
* Watch as your LED blinks out the SOS Morse code.

## What I Learned
* Basic Arduino setup: PinMode, digitalWrite, and delay.
* Introduction to Morse code in electronics.
* Using the Arduino IDE to write and upload code to my Arduino.
