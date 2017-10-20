#include <SoftPWM.h>

unsigned int LED_PIN = 13;
unsigned int STANDARD_HELLIGKEIT = 100;

unsigned int helligkeit = STANDARD_HELLIGKEIT;

void setup() {
  SoftPWMBegin();
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}


void loop() { 
  if (digitalRead(3) == LOW) {
    helligkeit = 0;
  }else if (digitalRead(4) == LOW) {
    helligkeit = 10;
  }else if (digitalRead(5) == LOW) {
    helligkeit = 30;
  }else if (digitalRead(6) == LOW) {
    helligkeit = 60;
  }else {
    helligkeit = STANDARD_HELLIGKEIT;
  }
   SoftPWMSetPercent(LED_PIN, helligkeit);
}

