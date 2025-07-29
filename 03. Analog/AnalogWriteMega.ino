int OutputLedPin = 13;
void setup() {
  pinMode(OutputLedPin, OUTPUT);
}
void loop() {
  for(int brightness = 0; brightness <= 255; brightness ++) {
    digitalWrite(OutputLedPin, brightness);
  }
  for(brightness = 255; brightness >=0 ; brightness--) {
    digitalWrite(OutputLedPin, brightness);
  }
}
