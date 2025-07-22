void setup() {
  serial.begin(9600);
  pinMode(A0, OUTPUT);
}

void loop() {
  int SensorValue = AnalogRead(A0);
  SensorValue = (SensorValue/5) * 1023;
  serial.println(SensorValue);
  delay(1000);
}
