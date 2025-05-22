# Arduino Project 03 - LED Brightness Control Using a Potentiometer

## Overview

This Arduino project demonstrates how to control the brightness of an LED using a potentiometer. By reading the analog input from the potentiometer, the code maps the input values to a PWM output signal which adjusts the brightness of an LED in real-time.

This is my **third project** in my Arduino learning journey, and it focuses on analog-to-digital conversion and PWM signal output.[Video link](https://drive.google.com/drive/folders/1ipZP2vB1RNWuVPTSW-4oNtbPT-bue5Md?usp=sharing)

---

## Components Used

- Arduino Uno (or compatible board)
- LED
- 220Ω resistor (for current limiting)
- Potentiometer (5kΩ)
- Breadboard
- Jumper wires

---

## Circuit Description

- **Potentiometer**:
  - One outer leg to **5V**
  - Other outer leg to **GND**
  - Middle (wiper) leg to **Analog pin A0**
  
- **LED**:
  - Anode (+) connected to **digital pin 9** through a **220Ω resistor**
  - Cathode (–) connected to **GND**

The analog signal from the potentiometer is read via pin A0. The Arduino maps this input to a PWM value that controls the LED on pin 9, changing its brightness.

---

## How It Works

1. The potentiometer adjusts voltage between 0V and 5V.
2. `analogRead(A0)` reads this voltage and returns a value from 0 to ~510 (depending on the pot's range).
3. This value is mapped to a PWM-compatible range of 0 to 255 using the `map()` function.
4. The PWM signal is output through `analogWrite()` on pin 9, controlling LED brightness accordingly.
5. Serial monitor prints raw potentiometer values for debugging purposes.

---

## Code Breakdown

```cpp
Serial.begin(9600);           // Begin serial communication
pinMode(9, OUTPUT);           // Set pin 9 as output for LED

int potvalue = analogRead(A0);    // Read the analog input from potentiometer
Serial.println(potvalue);         // Print it to the Serial Monitor
int mappedvalue = map(potvalue, 0, 510, 0, 255);  // Map to PWM range
analogWrite(9, mappedvalue);     // Output PWM signal to LED
