const int ledpin = 13;
const int sensorpin = A0;

int sensorvalue;
int maxsensorvalue = 1023;
int minsensorvalue = 0;

void setup() {
  sensorvalue = analogRead(sensorpin);
  if(sensorvalue > maxsensorvalue) {
    maxsensorvalue = sensorvalue;
  }
  else if (minsensorvalue > sensorvalue) {
    minsensorvalue = sensorvalue;
  }
}

void loop() {
  sensorvalue = analogRead(sensorpin);
  sensorvalue = constrain(sensorvalue, minsensorvalue, maxsensorvalue);
  sensorvalue = map(sensorvalue, minsensorvalue, 0, maxsensorvalue, 255);
  analogWrite(ledpin, sensorvalue);
}
