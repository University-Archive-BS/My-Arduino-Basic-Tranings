int buzzerPin = 10;
int trig=12;
int echo=11;
long duration;
int distance;

void setup() 
{
  pinMode(trig, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() 
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration*.034) / 2;

  if (distance < 100)
  {
    digitalWrite(buzzerPin, HIGH);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }
}
