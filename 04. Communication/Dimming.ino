const int ledpin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}
void loop() {
  byte brightness;
  if(Serial.Available()) {
    brightness = Serial.read();
    analogWrite(ledpin, brightness);
  }
}
