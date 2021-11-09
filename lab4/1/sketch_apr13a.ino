#include <Servo.h>

Servo servo;

int pos = 0;


void setup(){
  servo.attach(2);
}

  
void loop(){

  for (pos = 0; pos <= 90; pos += 1) {
    servo.write(pos);
    delay(10);
  }
  delay(100);
  for (pos = 90; pos >= 0; pos -= 1) { 
    servo.write(pos);
    delay(10);
  }
  delay(100);
}
