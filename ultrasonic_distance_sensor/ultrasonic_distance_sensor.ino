int trig = 12;
int echo = 11;
long duration;
int distance;

void setup() 
{
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
  pinMode(echo, INPUT);
}

void loop() 
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration=pulseIn(echo, HIGH);
  distance=(duration*.034) / 2;
  Serial.print("distance: ");
  Serial.println(distance);
  delay(1000);
}
