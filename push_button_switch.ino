void setup() {
  pinMode(8 , INPUT);
pinMode(2, OUTPUT);
}

void loop() {
 int r = digitalRead(8);
if (r==HIGH)
 { 
  digitalWrite(2, HIGH);   
  } 
  else
  {                    
  digitalWrite(2, LOW);   
  }
}
