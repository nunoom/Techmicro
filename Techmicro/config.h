#ifndef CONFIG_H
#define CONFIG_H

// -------------------------------------------------------
// Techmicro – Configurações do projeto
// -------------------------------------------------------

// Pino analógico do sensor (A0 = 14 no mapeamento numérico)
#define SENSOR_PIN      A0

// Pino do LED de status
#define LED_PIN         13

// Limiar (0–1023): acima deste valor o LED acende
#define THRESHOLD       512

// Intervalo entre leituras (milissegundos)
#define READ_INTERVAL_MS 500

#endif // CONFIG_H
