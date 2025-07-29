int SensorPin = A0;
int OutputPin = 13;
int SensorValue;
void setup() {
  pinMode(OutputPin, OUTPUT);
}
void loop() {
  SensorValue = analogRead(SensorPin);
  digitalWrite(OutputPin, HIGH);
  delay(SensorValue);
  digitalWrite(OutputPin, LOW);
  delay(SensorValue);
}
