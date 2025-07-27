int ledpin = 13;
int ledstate = LOW;
int previousmillis = 0;
int interval = 1000;
void setup() {
  pinMode(ledpin, OUTPUT);
}
void loop() {
  int currentmillis = millis();
  if(currentmillis - previousmillis >= interval)
  {
    previousmillis = currentmillis;
    if(ledstate == LOW)
    {
      ledstate = HIGH;
    }
    else
    {
      ledstate = LOW;
    }
    digitalWrite(ledpin, ledstate);
  }
}
