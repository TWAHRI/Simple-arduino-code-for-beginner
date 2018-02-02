 const int trigpin=10;
  const int echopin=A0;
  const int buzzer=7;
  const int led=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}
long microsecondsToCentimetres(long microseconds)
{return microseconds/29/2;}
long distance()
{long cm,duration;
 pinMode(trigpin,OUTPUT);
 digitalWrite(trigpin,LOW);
 delayMicroseconds(500);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(500);
 digitalWrite(trigpin,LOW);
 pinMode(echopin,INPUT);
 duration=pulseIn(echopin,HIGH);
 cm= microsecondsToCentimetres(duration);
 return cm; }
void loop() {
  // put your main code here, to run repeatedly:
  
Serial.print(distance());
delay(500);
if (distance()<20)
{digitalWrite(led,LOW);
tone(buzzer,1000);
}
else
{
noTone(buzzer);

digitalWrite(led,HIGH);
}
Serial.print("\n");
}

