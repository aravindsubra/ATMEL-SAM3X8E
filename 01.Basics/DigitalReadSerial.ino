void setup() {
  serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int SensorValue = digitalRead(2);
  serial.println(SensorValue);
  delay(1000);
}
