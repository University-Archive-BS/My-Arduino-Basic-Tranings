int led0 = 11;
int led1 = 12;

int pin0 = A0;
int pin1 = A1;
int pin2 = A2;
int pin3 = A3;

void setup()
{
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  
  pinMode(pin0, INPUT);
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
}

void loop()
{
  if (digitalRead(pin0) == HIGH)
  {
      digitalWrite(led0, LOW);
      digitalWrite(led1, LOW);
  }
  else if (digitalRead(pin1) == HIGH)
  {
      digitalWrite(led0, HIGH);
      digitalWrite(led1, LOW);
  }
  else if (digitalRead(pin2) == HIGH)
  {
      digitalWrite(led0, LOW);
      digitalWrite(led1, HIGH);
  }
  else if (digitalRead(pin3) == HIGH)
  {
      digitalWrite(led0, HIGH);
      digitalWrite(led1, HIGH);
  }
}
