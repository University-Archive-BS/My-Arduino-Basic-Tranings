void setup() {
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop() {
  float value = analogRead(A3); //this analoge read is from 0 to 1023
  float dama = ( ( ( (value * 5) / 1023) ) / 0.01) + 2; //convert analoge read from scale of 0-1023 to scale of 0-5 
 Serial.println(dama);
 delay(3000);
}
