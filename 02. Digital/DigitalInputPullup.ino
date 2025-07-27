void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
void loop()
{
  int sensorvalue = digitalRead(2);
  Serial.println(sensorvalue);
  if(sensorvalue == LOW)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
