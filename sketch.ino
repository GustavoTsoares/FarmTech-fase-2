#include <Arduino.h>

const int PIN_RELAY = 5;   // esp:IO5 -> relay:IN
const int PIN_LED   = 2;   // LED azul da placa (esp:IO2)

void setup() {
  pinMode(PIN_RELAY, OUTPUT);
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_RELAY, LOW);
  digitalWrite(PIN_LED, LOW);
}

void loop() {
  digitalWrite(PIN_RELAY, HIGH);
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  digitalWrite(PIN_RELAY, LOW);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}
