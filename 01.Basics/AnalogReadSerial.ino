void setup() {
  Serial.begin(9600);
}

void loop() {
  int SensorValue = AnalogRead(A0);
  Serial.println(SensorValue);
  delay(1000);
}
