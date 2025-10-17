// Blink LED Externo - Parte 2

int ledPin = 13;  // LED conectado ao pino digital 13

void setup() {
  pinMode(ledPin, OUTPUT);  // Define o pino 13 como saída
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Liga o LED
  delay(99);                   // Espera 99 ms
  digitalWrite(ledPin, LOW);   // Desliga o LED
  delay(99);                   // Espera 99 ms
}

