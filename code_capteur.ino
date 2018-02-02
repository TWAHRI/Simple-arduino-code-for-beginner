int capteur1=4;



void setup() {
  Serial.begin(9600);
  pinMode(capteur,INPUT);
 
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.print(digitalRead(capteur));
Serial.print("\n");

delay(500);

}
