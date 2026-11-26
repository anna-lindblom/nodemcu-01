void setup() {
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}

void loop() {
  digitalWrite(D5, LOW);
  digitalWrite(D6, HIGH); 
  delay(2000);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, LOW);
  delay(2000);
}