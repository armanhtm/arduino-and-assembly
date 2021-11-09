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
  Serial3.print("sending...");
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV8);
}

void loop(){
    delay(200);
    digitalWrite(Slave1, LOW);
    delay(10);
    byte a[] = {'a','r','m','a','n'};
    for(int i = 0 ; i < 5 ; i++){
      SPI.transfer(a[i]);
    }
    delay(10);
    digitalWrite(Slave1, HIGH);
    delay(200);
    digitalWrite(Slave2, LOW);
    delay(10);
    byte b[] = {'h','e','l','l','o',':','a','r','m','a','n'};
    for(int i = 0 ; i < 11 ; i++){
      SPI.transfer(b[i]);
    }
    delay(10);
    digitalWrite(Slave2, HIGH);
    delay(200);
}
