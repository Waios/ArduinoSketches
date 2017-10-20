int switchState = 0;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}
void loop () { 
  switchState = digitalRead(2);

  if (switchState == LOW) {
    //Schalter wird nicht gedrückt

     digitalWrite(3, HIGH); // grüne LED
     digitalWrite(4, LOW);  // rote LED
     digitalWrite(5, LOW);  // rote LED
    
  }else { // Schalter wird gedrückt 
    
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, HIGH);

  delay(500); //warte um eine viertelsekund 
  //schalte die LEDs um
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(500); //warte eine viertelsekunde
  
  }
  
} //beginne von vorne mit der schleife

