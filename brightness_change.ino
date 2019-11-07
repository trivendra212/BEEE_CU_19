int i;

void setup() {
pinMode(10, OUTPUT);
}

void loop() {
  for (i=1; i<=255; i=i+20)
  {
  analogWrite(10,i);
  delay(500);
  }
  for (i=255; i>=0; i=i-20) 
  {
      analogWrite(10,i);
      delay(500);
      }
    Serial.read();
    Serial.print(i);
}
