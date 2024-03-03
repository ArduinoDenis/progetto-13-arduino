#include <Servo.h> // Include the Servo library

Servo Servo1; // Declare Servo1 object

void setup() {
  Servo1.attach(9); // Attach Servo1 to digital pin 9
}

void loop() {
  // Move Servo1 to various positions with delays in between
  Servo1.write(-180);
  delay(500);
  Servo1.write(-150);
  delay(500);
  Servo1.write(-120);
  delay(500);
  Servo1.write(-90);
  delay(500);
  Servo1.write(-60);
  delay(500);
  Servo1.write(-30);
  delay(500);
  Servo1.write(0);
  delay(500);
  Servo1.write(30);
  delay(500);
  Servo1.write(60);
  delay(500);
  Servo1.write(90);
  delay(500);
  Servo1.write(120);
  delay(500);
  Servo1.write(150);
  delay(500);
  Servo1.write(180);
  delay(500);
}
