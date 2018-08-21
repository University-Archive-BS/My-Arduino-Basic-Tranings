int photoResistor = A0; // Photoresistor at Arduino analog pin A0
int ledPin = 9;       // Led pin at Arduino pin 9
int value;          // Store value from photoresistor (0-1023)

void setup() {
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);
 pinMode(photoResistor, INPUT);
}

void loop() {
  value = analogRead(photoResistor) / 2; //with a 10k resistor divide the value by 2, for 100k resistor divide by 4.
  analogWrite(ledPin, value);
  Serial.println(value);
  delay(500); //Small delay
}
