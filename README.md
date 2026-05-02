# Techmicro – Arduino Hackathon

Projeto Arduino desenvolvido para o **Hackathon Techmicro**.

## Descrição

Este projeto implementa um sistema de monitoramento de sensores com saída serial e controle de LED de status usando Arduino. É uma base versátil para projetos de IoT e automação apresentados no hackathon.

## Funcionalidades

- Leitura de sensor analógico (ex.: potenciômetro, LDR, NTC)
- Indicação visual via LED embutido (pino 13)
- Saída de dados via Monitor Serial (9600 baud)
- Limiar configurável para acionamento do LED
- Intervalo de leitura configurável

## Hardware necessário

| Componente | Quantidade |
|---|---|
| Arduino Uno (ou compatível) | 1 |
| Sensor analógico (ex.: potenciômetro 10 kΩ) | 1 |
| LED + resistor 220 Ω (opcional – complementar ao LED embutido) | 1 |
| Protoboard e jumpers | conforme necessário |

## Pinagem

| Pino Arduino | Função |
|---|---|
| A0 | Entrada do sensor analógico |
| 13 | LED de status (embutido na placa) |

## Como usar

### Pré-requisitos

- [Arduino IDE](https://www.arduino.cc/en/software) 1.8+ ou Arduino IDE 2.x
- Nenhuma biblioteca externa necessária

### Configuração

1. Abra a pasta `Techmicro/` na Arduino IDE (File → Open → selecione `Techmicro.ino`).
2. Ajuste as constantes em `config.h` conforme necessário:
   - `SENSOR_PIN` – pino analógico do sensor
   - `LED_PIN` – pino do LED de status
   - `THRESHOLD` – valor (0–1023) acima do qual o LED acende
   - `READ_INTERVAL_MS` – intervalo entre leituras em milissegundos
3. Conecte o Arduino ao computador via USB.
4. Selecione a placa e a porta em **Tools → Board** e **Tools → Port**.
5. Clique em **Upload** (→).
6. Abra o **Serial Monitor** (Ctrl+Shift+M) e configure a taxa para **9600 baud**.

## Estrutura do projeto

```
Techmicro/
├── README.md
└── Techmicro/
    ├── Techmicro.ino   # Sketch principal
    └── config.h        # Constantes de configuração
```

## Licença

MIT
