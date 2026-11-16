Arudino Nano ESP32 Servo:

A project using an Arduino Nano ESP32 to control two continuous-rotation servos.

Hardware:
- Arduino Nano ESP32
- 2x Continuous-rotation servos
- 5.6V battery
- Breadboard and jumper wires

Wiring:
| Component | Arduino |
|VBUS| |GND|
| Servo 1 signal | D9 |
| Servo 2 signal | D10 |
| Ground | GND |

Servos are powered by an external battery.
All components share a ground.

Software:
- Arduino IDE
- ESP32Servo library

Features:
- Control two continuous-rotation servos
- Forward and reverse rotation
- Stop both servos

Future Improvements:
- [ ] Independent servo speed control
- [ ] Bluetooth control
- [ ] Movement sequences
