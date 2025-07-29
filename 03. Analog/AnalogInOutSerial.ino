const int AnalogInPin  = A0;
const int AnalogOutPin = 13;
int SensorValue = 0;
int OutputValue = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  SensorValue = analogRead(AnalogInPin);
  OutputValue = map(SensorValue, 0, 1023, 0, 255);
  analogWrite(AnalogOutPin, OutputValue);
  Serial.println("Sensor Value is : ");
  Serial.println(SensorValue);
  Serial.println("\t Output Value is : ");
  Serial.println(OutputValue);
  delay(2);
}
