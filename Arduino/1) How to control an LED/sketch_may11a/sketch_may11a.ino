void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //S (dot dot dot)
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(750);

  //O (dash dash dash)
  digitalWrite(8, HIGH);
  delay(750);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(750);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(750);
  digitalWrite(8, LOW);
  delay(100);

  //S (dot dot dot(AGAIN))
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(2000);

}
