#include <SPI.h>
#define input 51

byte buffer1[12];
byte index = 0;
boolean done = false;
int number;
int mode = 2;

void setup(){
  Serial3.begin (9600);
  pinMode(input, INPUT_PULLUP);
  // turn on SPI in slave mode
  SPCR |= _BV(SPE);
  // turn on interrupts
  SPCR |= _BV(SPIE);
  SPI.attachInterrupt();
}

void loop(){
  if(mode == 1){
    if (done){
      done = !done;
      number = buffer1[0] + (buffer1[1] << 8);
      Serial3.println(number);
      index = 0;
    }
  }else if(mode == 2){
    if(done){
      done = !done;
      for(int i = 0 ; i < 12 ; i++){
        char c = buffer1[i];
        Serial3.print(c);
      }
      Serial3.println("");
      index = 0;
    }
  }
}
ISR(SPI_STC_vect){
  byte b = SPDR;
  if(mode == 1){
    if(index < 2){
      buffer1[index++] = b;
      if (index == 2)
        done = true;
    }
  }else if(mode == 2){
    buffer1[index] = b;
    index++;
    if(index == 5)
      done = true;
  }
}
