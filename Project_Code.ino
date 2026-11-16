
#include <ESP32Servo.h>

Servo servo1;
Servo servo2;

// Servo signal pins
const int servo1Pin = 18;
const int servo2Pin = 21;

// Continuous servo speed
// 90 = stop
// 0 = full speed one direction
// 180 = full speed opposite direction

void setup() {

  servo1.attach(servo1Pin, 500, 2500);
  servo2.attach(servo2Pin, 500, 2500);

  stopServos();
}

void loop() {

  // Both servos forward
  servo1.write(180);
  servo2.write(180);
  delay(2000);

  // Stop both
  stopServos();
  delay(1000);

  // Both servos reverse
  servo1.write(0);
  servo2.write(0);
  delay(2000);

  // Stop both
  stopServos();
  delay(1000);
}

void stopServos() {
  servo1.write(90);
  servo2.write(90);
}


