int ledPins[4] = {7, 9, 13, 24};
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  for(int i=0; i<4; i++) {
    digitalWrite(ledPins[i],HIGH);
    delay(500);
    digitalWrite(ledPins[i],LOW);
    delay(500);
  }   
}
