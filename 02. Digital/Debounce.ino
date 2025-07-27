int ledpin = 13;
int ledstate = HIGH;
int delaydebounce = 50;
int lastdebouncestate = LOW;
int lastbouncetime = 0;
int buttonpin = 2;
int buttonstate;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  digitalWrite(ledpin, ledstate);
}
void loop()
{
  int reading = digitalRead(buttonstate);
  if(reading != lastbuttonstate)
  {
    lastbouncetime = millis();
  }
  if(millis() - lastbouncetime >= delaydebounce)
  {
    if(reading != buttonstate)
    {
      buttonstate = reading;
    }
    ledstate = !ledstate;
  }
  digitalWrite(ledpin, ledstate);
  lastbuttonstate = reading;
}
