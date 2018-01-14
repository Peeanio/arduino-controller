// Max Russell 14/12/18
// Using 20 pins on Arduino Leonardo as a keyboard controller for flight sims
// This is the easy way, instead of a jostick driven device. 
// Can bind the controls on the keyboard or in the game. 


#include <Keyboard.h>

void setup() {
  // intializes all of the pins, only 20 on leonardo
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);

  // starts the keyboard
  Keyboard.begin();
}

void loop() {
  // loop for kepresses. Insert delays between press and release to hold key
  // increase post-release delays if the keypresses are too much
  if(digitalRead(0) == LOW){
    Keyboard.press('0');
    Keyboard.release('0');
    delay(200); 
  }
   if(digitalRead(1) == LOW){
    Keyboard.press('1');
    Keyboard.release('1');
    delay(200); 
   }
  if(digitalRead(2) == LOW){
    Keyboard.press('2');
    Keyboard.release('2');
    delay(200);
  }
  if(digitalRead(3) == LOW){
    Keyboard.press('3');
    Keyboard.release('3');
    delay(200);
  }
  if(digitalRead(4) == LOW){
    Keyboard.press('4');
    Keyboard.release('4');
    delay(200);
  }
  if(digitalRead(5) == LOW){
    Keyboard.press('5');
    Keyboard.release('5');
    delay(200);
  }
  if(digitalRead(6) == LOW){
    Keyboard.press('6');
    Keyboard.release('6');
    delay(200);
  }
  if(digitalRead(7) == LOW){
    Keyboard.press('7');
    Keyboard.release('7');
    delay(200);
  }
  if(digitalRead(8) == LOW){
    Keyboard.press('8');
    Keyboard.release('8');
    delay(200);
  }
  if(digitalRead(9) == LOW){
    Keyboard.press('9');
    Keyboard.release('9');
    delay(200);
  }
  if(digitalRead(10) == LOW){
    Keyboard.press('a');
    Keyboard.release('a');
    delay(200);
  }
  if(digitalRead(11) == LOW){
    Keyboard.press('b');
    Keyboard.release('b');
    delay(200);
  }
  if(digitalRead(12) == LOW){
    Keyboard.press('c');
    Keyboard.release('c');
    delay(200);
  }
  if(digitalRead(13) == LOW){
    Keyboard.press('d');
    Keyboard.release('d');
    delay(200);
  }
  if(digitalRead(A0) == LOW){
    Keyboard.press('e');
    Keyboard.release('e');
    delay(200);
  }
  if(digitalRead(A1) == LOW){
    Keyboard.press('f');
    Keyboard.release('f');
    delay(200);
  }
  if(digitalRead(A2) == LOW){
    Keyboard.press('g');
    Keyboard.release('g');
    delay(200);
  }
  if(digitalRead(A3) == LOW){
    Keyboard.press('h');
    Keyboard.release('h');
    delay(200);
  }
  if(digitalRead(A4) == LOW){
    Keyboard.press('i');
    Keyboard.release('i');
    delay(200);
  }
  if(digitalRead(A5) == LOW){
    Keyboard.press('j');
    Keyboard.release('j');
    delay(200);
  }
}
