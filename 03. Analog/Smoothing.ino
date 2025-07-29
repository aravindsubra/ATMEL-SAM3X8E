int indexw = 10;
int readings[10];
int readindex = 0;
int average;
int total;
void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 10; i++) {
    readings[i] = 0;
  }
}
void loop() {
  readings[readindex] = analogRead(A0);
  total += readings[readindex];
  readindex++;  
  if(readindex > indexw) {
    readindex = 0;
  }
  average = total/indexw;
  Serial.println(average);
  delay(100);
}
