void setup() {
  // put your setup code here, to run once:
  for(int pin=9; pin<12; pin++){
    
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int t = 20;
  
  for(int i=9; i<12; i++){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i+9, HIGH);
    delay(t);
    digitalWrite(i+10, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i+1, LOW);
  }

  for(int i=12; i>9; i--){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i-9, HIGH);
    delay(t);
    digitalWrite(i-10, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i-1, LOW);
  }

}
