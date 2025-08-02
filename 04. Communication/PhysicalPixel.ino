const int ledpin = 13;
int incomingbyte;
void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}
void loop() {
  if(Serial.available() > 0) {
    incomingbyte = Serial.read();
    if(incomingbyte == 'H') {
      digitalWrite(ledpin, HIGH);
    }
    if(incomingbyte == 'L') {
      digitalWrite(ledpin, LOW);
    }
  }
}
