#include <SPI.h>

#define Sensor A0
#define Resistor A1

const int Slave1 = 45, Slave2 = 46;
byte tempArray[2],lightArray[2];
float temp, light;
int mode = 1;

void setup(){
  Serial3.begin(9600);
  pinMode(Slave1, OUTPUT);
  pinMode(Slave2, OUTPUT);
  digitalWrite(Slave1, HIGH);
  digitalWrite(Slave2, HIGH);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV8);
}

void loop(){
  if(mode == 1){
    light = analogRead(Resistor);
    temp = analogRead(Sensor);
    light = map(light,-800,1023,0,100);
    temp /= 10;
    Serial3.print("temp = ");
    Serial3.println(temp);
    Serial3.print("light = ");
    Serial3.println(light);
    tempArray[0] = temp;
    tempArray[1] = (int)temp >> 8;
    lightArray[0] = light;
    lightArray[1] = (int)light >> 8;
    digitalWrite(Slave1, LOW);
    delay(200);
    for (int i = 0 ; i < 2 ; i++){
      SPI.transfer(tempArray[i]);
    }
    delay(10);
    digitalWrite(Slave1, HIGH);
    delay(200);
    digitalWrite(Slave2, LOW);
    delay(10);
    for (int i = 0 ; i < 2 ; i++){
      SPI.transfer(lightArray[i]);
    }
    delay(10);
    digitalWrite(Slave2, HIGH);
    delay(200);
   }else if(mode == 2){
    Serial3.println("to slaves : arman9730008");
    delay(200);
    digitalWrite(Slave1, LOW);
    delay(10);
    byte a[] = {'a','r','m','a','n','9','7','3','0','0','0','8'};
    for(int i = 0 ; i < 12 ; i++){
      SPI.transfer(a[i]);
    }
    delay(10);
    digitalWrite(Slave1, HIGH);
    delay(200);
    digitalWrite(Slave2, LOW);
    delay(10);
    for(int i = 0 ; i < 12 ; i++){
      SPI.transfer(a[i]);
    }
    delay(10);
    digitalWrite(Slave2, HIGH);
    delay(200);
   }
}
