void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}
void loop() {
  // put your main code here, to run repeatedly:
  int lectura = digitalRead(7);
  if (lectura == 0) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}
