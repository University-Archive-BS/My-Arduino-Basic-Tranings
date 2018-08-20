int ledPin = 12;   // LED connected to digital pin 12

void setup() {
  pinMode(ledPin, OUTPUT);      // sets the digital pin 12 as output
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
