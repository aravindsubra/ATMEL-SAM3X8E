int ledpin = 13;
int button = 2;
int buttonstate = LOW;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(button, INPUT);
}
void loop()
{
  buttonstate = digitalRead(button);
  if(buttonstate == LOW)
  {
    ledpin = LOW;
  }
  else
  {
    ledpin = HIGH;
  }
}
