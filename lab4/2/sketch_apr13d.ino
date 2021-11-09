#include <Keypad.h>
#include <Servo.h>

Servo servo;

const byte ROWS = 4;
const byte COLS = 4;
//ست کردن کی پد
char hexaKeys[ROWS][COLS] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'C', '0', '=', '+'}
};
byte rowPins[ROWS] = {23, 25, 27, 29}; //وصل کردن سطر به کی پد
byte colPins[COLS] = {31, 33, 35, 37}; //وصل کردن ستون به کی پد
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

char Operator = NULL;//نگهداری عملیات
int len ;//نگهداری سایز عدد
long int num1;//عدد اول برای عملیات
long int num2;//عدد دوم برای عملیات
char nums[10] ;//نگهداری کاراکتر های وارد شده

void setup() {
  Serial.begin(9600);
  servo.attach(9);
  len = 0;
}

void loop() {
  char Key = customKeypad.getKey();
  if (Key) {
    if(Key == 'C')
      Serial.println();
    else  
      Serial.print(Key);
    if (Key == 'C') {
      len = 0;
      num1 = 0;
    }
    else if (Key == '=') {
      num1 = converting(nums);//تبدیل کاراکتر به عدد دوم
      len = 0;
  
      //حل معادله با توجه به اعداد و اپراتور های وارد شده
      if(num1 < 180){
        num2 = 1500 + ((num1 / 180.0) * 500);
        servo.writeMicroseconds(num2);
      }
      else{
        num2 = 1500 - (((360 - num1) / 180.0) * 500);
        servo.writeMicroseconds(num2);
      }
    }
    else {
      nums[len] = Key ;
      len++;
    }
  }
}
//تابع تبدیل کاراکتر به عدد
int converting(char* nums) {
  long int num = 0;
  for (int i = len; i < 10 ; i++ ) {
    nums[i] = 0;
  }
  num=atoi(nums);
  for (int i = 0 ; i < 10 ; i++ ) {
    nums[i] = 0;
  }
  return num;
}
