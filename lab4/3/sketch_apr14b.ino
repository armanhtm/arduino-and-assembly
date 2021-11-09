#include <Keypad.h>
#include <Servo.h>
int val;
Servo servo;
int num = 0;
int num2 = 1500;
int temp = 0;
String entered = "";

void setup(){
  
  Serial.begin(9600);
  servo.attach(9);
  servo.writeMicroseconds(num2);
}
  
void loop(){

 
  if (Serial.available() > 0) {
    
    entered = Serial.readStringUntil('\n');
    num = converting(entered);
    if(num != 0 && valid(num)){
          Serial.println(num);
          temp = num/180.0 * 500;
          num2 -= temp;
          servo.writeMicroseconds(num2);
    }
    entered = "";
    }

  }
  int converting(String a) {
  int flag = 0;
  int i , k = pow(10,a.length() - 1), num1 = 0;
  if(a[0] == '-'){
    flag = 1;
    i = 1;
    k/=10;
  }
  else
    i = 0;
  if(a.length()- flag == 0)
   return 0;  
  for(; i < a.length() ;i++ ){
      num1 += (a[i] - '0') * k;
      k /= 10;
      Serial.print("*");
      Serial.print(num1);
  }
  if(flag == 1)
    num1 *= -1;
  return num1;
}
  int valid(int a){
    if(a > 0){
      if(num2 - a < 999)
        return 0;
    }
    else
        if(num2 + a > 2001)
            return 0;
    return 1;        
  }
