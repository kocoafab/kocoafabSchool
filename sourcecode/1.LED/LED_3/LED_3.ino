void setup() {
}

void loop() {
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000);

  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(1000);
}

