# Arduino RGB LED Blinker

This project controls an RGB LED connected to an Arduino board. It cycles through the red, blue, and green colors by turning on one color at a time with a 1-second delay between each. Great for beginners learning digital output and pin control on Arduino.

---

## Features

- Blinks RED, then BLUE, then GREEN LEDs in a loop
- 1-second delay between each color
- Teaches basic `pinMode`, `digitalWrite`, and `delay` usage

---

## Hardware Required

- 1 x Arduino Uno (or compatible board)
- 1 x RGB LED (or 3 separate LEDs)
- 3 x 220Ω resistors
- Jumper wires
- Breadboard

---

## Circuit Diagram

| LED Color | Arduino Pin | Resistor |
|-----------|-------------|----------|
| Red       | 11          | 220Ω     |
| Blue      | 5           | 220Ω     |
| Green     | 3           | 220Ω     |

**Note:** Connect the common cathode (GND) of the RGB LED to Arduino GND.

---

## Getting Started

1. Connect your components to match the pin assignments.
2. Upload the sketch to your Arduino.
3. Watch your LED cycle through red → blue → green.

---


## Contributing

Feel free to fork, modify, and submit pull requests. Let’s make hardware blink like never before.

---
