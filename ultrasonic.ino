int trigPin = 10;
int echoPin = 9;
long duration;
int distance;

void setup() {
pinMode(10, OUTPUT);
pinMode(9, INPUT);
pinMode(3, OUTPUT);
Serial.begin(9600);
}

void loop() {
  digitalWrite(10,LOW);
  delayMicroseconds(2);
   digitalWrite(10,HIGH);
   delayMicroseconds(10);
   digitalWrite(10,LOW);
   duration=pulseIn(9,HIGH);
   distance = duration *0.034/2;
   Serial.print("distance:");
   Serial.println(distance);
   if (distance <=36)
   { digitalWrite(3,HIGH);
   delay(300);
   }
   else
   {
    digitalWrite(3,LOW);
   }
}
