# Projeto de Controle de LEDs com ESP32

Este projeto consiste no controle de três LEDs (vermelho, amarelo e verde) utilizando a placa **ESP32**. A programação foi realizada em **C++** utilizando a IDE do Arduino, e o código aciona os LEDs de acordo com intervalos de tempo pré-definidos, simulando um ciclo de semáforo.

## Descrição do Funcionamento

- O **LED vermelho** acende por 6 segundos.
- Em seguida, o **LED amarelo** acende por 2 segundos.
- Após isso, o **LED verde** acende por 2 segundos.
- O **LED amarelo** pisca por 2 segundos (com intervalos de 500 ms).
- Por fim, o **LED vermelho** acende novamente por 2 segundos.

O código foi otimizado para utilizar o tipo `int8_t`, um tipo de dado de 8 bits adequado para definir os pinos GPIO, que são usados para controlar os LEDs.

## Código Utilizado

```cpp
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
```

## Demonstração 

A demonstração do que foi desenvolvido pode ser encontrado clicando [aqui](https://drive.google.com/file/d/1R6fNhjaWUe9-JgDpSo27Bh1pDEa96MBs/view?usp=sharing)