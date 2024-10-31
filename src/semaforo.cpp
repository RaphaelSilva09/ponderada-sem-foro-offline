const int8_t ledVermelho = 25;
const int8_t ledAmarelo = 32;
const int8_t ledVerde = 27;

void setup() {

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  while (millis() < currentMillis + 6000) {
    digitalWrite(ledVermelho, HIGH);
  }
  digitalWrite(ledVermelho, LOW);

  currentMillis = millis();
  while (millis() < currentMillis + 2000) {
    digitalWrite(ledAmarelo, HIGH);
  }
  digitalWrite(ledAmarelo, LOW);

  currentMillis = millis();
  while (millis() < currentMillis + 2000) {
    digitalWrite(ledVerde, HIGH);
  }

  currentMillis = millis();
  while (millis() < currentMillis + 2000) {
    digitalWrite(ledAmarelo, HIGH);
    delay(500);
    digitalWrite(ledAmarelo, LOW);
    delay(500);
  }
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);

  currentMillis = millis();
  while (millis() < currentMillis + 2000) {
    digitalWrite(ledVermelho, HIGH);
  }
  digitalWrite(ledVermelho, LOW);

}
