/**
 * Techmicro – Sketch principal
 * Hackathon Techmicro
 *
 * Lê um sensor analógico e acende o LED de status quando o
 * valor lido ultrapassa o limiar definido em config.h.
 * Todos os valores são reportados pelo Monitor Serial.
 */

#include "config.h"

// Tempo da última leitura
static unsigned long lastReadTime = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.println(F("=== Techmicro – Sistema de Monitoramento ==="));
  Serial.print(F("Pino do sensor : A"));
  Serial.println(SENSOR_PIN - A0);
  Serial.print(F("Limiar         : "));
  Serial.println(THRESHOLD);
  Serial.print(F("Intervalo (ms) : "));
  Serial.println(READ_INTERVAL_MS);
  Serial.println(F("-------------------------------------------"));
}

void loop() {
  unsigned long now = millis();

  if (now - lastReadTime >= READ_INTERVAL_MS) {
    lastReadTime = now;

    int sensorValue = analogRead(SENSOR_PIN);
    bool ledOn = sensorValue > THRESHOLD;

    digitalWrite(LED_PIN, ledOn ? HIGH : LOW);

    Serial.print(F("Sensor: "));
    Serial.print(sensorValue);
    Serial.print(F(" | LED: "));
    Serial.println(ledOn ? F("LIGADO") : F("DESLIGADO"));
  }
}
