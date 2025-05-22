# Button-Controlled LED Using Arduino (Project 2)

## Overview

This project demonstrates how to control an LED using a push button and an Arduino board. When the button is pressed, the LED turns on. When the button is released, the LED turns off. This is a basic example of digital input and output with an understanding of internal pull-up resistors.[Here is the video](https://drive.google.com/drive/folders/1qkUNIf6PPHUBSn9SZtYqIwVon3msBEQm?usp=sharing)

This is my **second Arduino project**, and it builds upon the fundamentals of digital pin control learned in the first project.

---

## Objectives

- Understand how to read input from a digital pin.
- Learn how to use internal pull-up resistors with `INPUT_PULLUP`.
- Control an output pin (LED) based on button state.
- Practice using the Serial Monitor for debugging and status display.

---

## Components Used

- 1 × Arduino Uno (or compatible board)
- 1 × Push button
- 1 × LED (any color)
- 1 × Resistor (220Ω for LED)
- Jumper wires
- Breadboard

---

## Circuit Diagram Description

- **Button wiring:**
  - One leg of the button is connected to **Arduino digital pin 7**.
  - The other leg of the button is connected to **GND**.
  - The Arduino's internal pull-up resistor ensures pin 7 stays **HIGH** when the button is not pressed.
  - When the button is pressed, the circuit is completed to **GND**, and pin 7 reads **LOW**.

- **LED wiring:**
  - **Anode** (longer leg) of the LED is connected to **Arduino pin 8** through a **220Ω resistor**.
  - **Cathode** (shorter leg) of the LED is connected to **GND**.

---

## Code Explanation

The code does the following:

1. Sets pin 7 as `INPUT_PULLUP`, which makes use of Arduino’s internal resistor to keep the input pin HIGH by default.
2. Sets pin 8 as `OUTPUT` to control the LED.
3. In the `loop()`, the button state is read:
   - If the button is pressed (state is LOW), the LED is turned on.
   - If the button is released (state is HIGH), the LED is turned off.
4. The button state is also printed to the Serial Monitor for debugging.

This approach avoids the need for an external pull-down resistor and simplifies wiring.

---

## Expected Behavior

- When you press and hold the button, the LED should turn on and the Serial Monitor should print `"High"`.
- When you release the button, the LED should turn off and the Serial Monitor should print `"Low"`.

---

## Troubleshooting

- If the LED behaves opposite to expected (on when not pressed), double-check your use of `INPUT_PULLUP` and the logic in the `if` condition.
- Ensure the LED's anode and cathode are correctly placed (reversed polarity will prevent it from lighting).
- Verify that the button is wired correctly between pin 7 and GND, not 5V.

---

## Learnings and Skills Gained

- How digitalRead and digitalWrite functions work.
- Why `INPUT_PULLUP` is useful to avoid floating pin issues.
- Real-time debugging using the Serial Monitor.
- Physical understanding of how momentary push buttons operate in a circuit.

---

## What’s Next?

- Implement toggle functionality using state change detection.
- Add a second button to control another output.
- Introduce PWM fading of the LED.
- Combine with sound or a display module.

---



