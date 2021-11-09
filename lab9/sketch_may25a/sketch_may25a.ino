#include <Keypad.h>
#include "pitches.h"
#include "mario.h"
#include "themes.h"
#include "pirates.h"
#include "mario_main.h"
#include "song.h"
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
char key;
int scale = 0;
int val;
int num = 300;
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};
void setup() {
  Serial3.begin(9600);
  analogReference(INTERNAL1V1); 
  Serial3.println("welcome press from 1 to 5 ");
   for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(int); thisNote++) {
    int noteDuration = num / noteDurations[thisNote];
    tone(8, (int)(melody[thisNote]* val) , noteDuration);
    delay((int)(noteDuration * 2));
    noTone(8);
  }
}

void loop() {
   while(key != '1' && key != '2' && key != '3' && key != '4' && key != '5'){
    val = analogRead(13);
    Serial3.println(val);
    key = keypad.waitForKey();
   }
    if(key == '1'){
    Serial3.println("mario\n");  
    for (int thisNote = 0; thisNote < sizeof(melody1) / sizeof(int); thisNote++) {
    scale = analogRead(A0);
    scale = map(scale, 0, 1023, 0, 5);
    int noteDuration = num / noteDurations1[thisNote];
    tone(8, (int)(melody1[thisNote]* scale) , noteDuration);
    delay((int)(noteDuration * 2));
    noTone(8);
      }
    }
    else if(key == '2'){
    Serial3.println("mario\n");  
    for (int thisNote = 0; thisNote < sizeof(melody2) / sizeof(int); thisNote++) {
    scale = analogRead(A0);
    scale = map(scale, 0, 1023, 0, 5);
    int noteDuration = num / noteDurations2[thisNote];
    tone(8, (int)(melody2[thisNote]* scale) , noteDuration);
    delay((int)(noteDuration * 2));
    noTone(8);
      }
    }
    else if(key == '3'){
    Serial3.println("mario\n");  
    for (int thisNote = 0; thisNote < sizeof(melody3) / sizeof(int); thisNote++) {
    scale = analogRead(A0);
    scale = map(scale, 0, 1023, 0, 5);
    int noteDuration = num / noteDurations3[thisNote];
    tone(8, (int)(melody3[thisNote]* scale) , noteDuration);
    delay((int)(noteDuration * 2));
    noTone(8);
      } 
    }
    else if(key == '4'){
    Serial3.println("mario\n");  
    for (int thisNote = 0; thisNote < sizeof(melody4) / sizeof(int); thisNote++) {
    scale = analogRead(A0);
    scale = map(scale, 0, 1023, 0, 5);
    int noteDuration = num / noteDurations4[thisNote];
    tone(8, (int)(melody4[thisNote]* scale) , noteDuration);
    delay((int)(noteDuration * 2));
    noTone(8);
      }
    }
    else {
    Serial3.println("mario\n");  
    for (int thisNote = 0; thisNote < sizeof(melody5) / sizeof(int); thisNote++) {
    scale = analogRead(A0);
    scale = map(scale, 0, 1023, 0, 5);
    int noteDuration = (int)(num / noteDurations5[thisNote]);
    tone(8, (int)(melody5[thisNote]* scale) , noteDuration);
    delay((int)(noteDuration * 2));
    noTone(8);
      }
    }
    key = '0';
}
