void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(4, digitalRead(0) == LOW ? HIGH : LOW);
  digitalWrite(5, digitalRead(1) == LOW ? HIGH : LOW);
  digitalWrite(6, digitalRead(2) == LOW ? HIGH : LOW);
  digitalWrite(7, digitalRead(3) == LOW ? HIGH : LOW);

  delay(20);
}
