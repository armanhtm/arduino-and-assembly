#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Wire.h>

#define DEV_ADDRESS 0b1010000
const int rs = 22, en = 23, d4 = 24, d5 = 25, d6 = 26, d7 = 27;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Keypad
const byte Rows = 4, Cols = 4;
char keys[Rows][Cols] =
{ 
  {'7', '8', '9', '/'},
  {'4', '5', '6', 'x'},
  {'1', '2', '3', '-'},
  {'*', '0', '=', '+'}
};
const byte rowPins[Rows] = {46, 47, 48, 49};
const byte colPins[Cols] = {50, 51, 52, 53};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, Rows, Cols); 
int current_mode = 1;
int default_mode = 1;
int before_wash_time = 99;
int wash_time = 99;
int water_time = 99;
int dry_time = 99;
char key;

void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  Wire.begin();
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(31,OUTPUT);
  current_mode = loadData();
  if(((current_mode != 1) && (current_mode != 2)) && ((current_mode != 3) && (current_mode != 4)))
    current_mode = 1;
  default_mode = current_mode;
}
 
void loop(){
  int counter = 0;
  int step_time = 0;
  int led_number = 0;
  
  if(current_mode == 1){
    step_time = before_wash_time;
    led_number = 28;
  }else if(current_mode == 2){
    step_time = wash_time;
    led_number = 29;
  }else if(current_mode == 3){
    step_time = water_time;
    led_number = 30;
  }else if(current_mode == 4){
    step_time = dry_time;
    led_number = 31;
  }
  digitalWrite(led_number, HIGH);
  while(counter < step_time){
    key = keypad.getKey();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("default mode : ");
    lcd.print(default_mode);
    lcd.setCursor(0,1);
    lcd.print("time : ");
    lcd.print(step_time - counter);
    
    if(key == '*'){
      key = keypad.waitForKey();
      while(key != '*')
      key = keypad.waitForKey();
    }
    else if(key == '-'){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("set time : ");
      key = keypad.waitForKey();
      lcd.setCursor(0,1);
      lcd.print(key);
      delay(500);
      if(key == '1'){
        key = keypad.waitForKey();
        before_wash_time = key - 48;
        key = keypad.waitForKey();
        before_wash_time = before_wash_time * 10 + key - 48;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print(before_wash_time);
        delay(500);
      }else if(key == '2'){
        key = keypad.waitForKey();
        wash_time = key - 48;
        key = keypad.waitForKey();
        wash_time = wash_time * 10 + key - 48;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print(wash_time);
        delay(500);
      }else if(key == '3'){
        key = keypad.waitForKey();
        water_time = key - 48;
        key = keypad.waitForKey();
        water_time = water_time * 10 + key - 48;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print(water_time);
        delay(500);
      }else if(key == '4'){
        key = keypad.waitForKey();
        dry_time = key - 48;
        key = keypad.waitForKey();
        dry_time = dry_time * 10 + key - 48;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print(dry_time);
        delay(500);
      }
    }
    counter ++;
    delay(100);
  }

  digitalWrite(led_number, LOW);
  current_mode ++;
  if(current_mode > 4){
    digitalWrite(28, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(31, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("done");
    key = keypad.waitForKey();
    while(key != '*' && key != '+')
    key = keypad.waitForKey();
    if (key == '+'){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("set mode : ");
      key = keypad.waitForKey();
      lcd.setCursor(0,1);
      lcd.print(key);
      delay(100);
      saveData(key - 48);
      delay(100);
    }
    digitalWrite(28, LOW);
    digitalWrite(39, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    current_mode = loadData();;
    default_mode = current_mode;
  }
}
void saveData(int data){
  Wire.beginTransmission(DEV_ADDRESS);
  Wire.write(0x00);
  Wire.write(0xAA);
  Wire.write(data);
  Wire.endTransmission();
}
int loadData(){
  Wire.beginTransmission(DEV_ADDRESS);
  Wire.write(0x00);
  Wire.write(0xAA);
  Wire.endTransmission();
  Wire.requestFrom(DEV_ADDRESS, 1);
  int data = Wire.read();
  return data;
}
