int Led 7 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(Led , OUTPUT );
  
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led , HIGH);
  delay(2000);
  digitalWrite(Led ,LOW);
  delay(1000);
  
}
