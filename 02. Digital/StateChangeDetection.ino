int laststatebutton = 0;
int pushbuttoncount = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}
void loop()
{
  int buttonstate = digitalRead(2);
  if(buttonstate != lastbuttonstate)
  {
    if(buttonstate == HIGH)
    {
      pushbuttoncount++;
      Serial.println("No. of push button counts : ");
      Serial.println(pushbuttoncount);
    }
    else
    {
      Serial.println("off");
    }
    lastbuttonstate = buttonstate;
  }
  delay(1000);
  if(pushbuttoncount%4 == 0)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
