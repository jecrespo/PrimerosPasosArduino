boolean estado_alarma = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lectura = digitalRead(7);
  if (lectura == 0) {
    if (estado_alarma == 0) {
      Serial.println("ALARMA!!!!!!");
      digitalWrite(13, HIGH);
      estado_alarma = 1;
    }
  }
  else {
    if (estado_alarma == 1) {
      digitalWrite(13, LOW);
      estado_alarma = 0;
      Serial.println("ALARMA RECUPERADA");
    }
  }
}
