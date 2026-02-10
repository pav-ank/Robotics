# Arduino DHT22 Temperature and Humidity Sensor Experiment

## Date
2026-02-10  

## Objective
Test the DHT22 (AM2302) sensor for reading temperature and humidity using Arduino, and understand proper wiring including the use of a pull-up resistor.

---

## Components Used
- Arduino Uno (or compatible)
- DHT22 (AM2302) sensor, 3-pin
- 10kΩ resistor
- Breadboard and jumper wires
- USB cable for Arduino connection

---

## Wiring Details

The DHT22 sensor has **3 pins**:
- **Left pin (+ve)** → VCC / Power (5V)
- **Middle pin (DATA)** → Signal connected to Arduino digital pin 2
- **Right pin (-ve)** → GND

### Connections
| DHT22 Pin | Connection       | Notes                                      |
|-----------|----------------|--------------------------------------------|
| +ve (left) | Arduino 5V      | Provides power to the sensor               |
| DATA (middle) | Arduino D2    | Reads sensor data                          |
| -ve (right) | Arduino GND    | Common ground                              |
| Pull-up resistor (10kΩ) | Between DATA (middle) and +ve (left) | Keeps the DATA line HIGH when idle, ensuring stable readings |

> **Important:** The pull-up resistor must be connected to **VCC (+ve)** and **not GND (-ve)**. Incorrect placement can cause unstable or incorrect sensor readings.

---
