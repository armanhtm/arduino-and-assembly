#include <Servo.h>

Servo servo; 

int val;

void setup() {
  servo.attach(9);
}

void loop() {
  val = analogRead(A0);
  val = map(val, 0, 1023, 1000, 2000);
  servo.writeMicroseconds(val);
  delay(15);
}
