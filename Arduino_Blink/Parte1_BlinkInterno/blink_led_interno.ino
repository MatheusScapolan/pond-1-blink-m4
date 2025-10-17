// Blink LED Interno - Parte 1

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Define o LED interno como saída
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Acende o LED interno
  delay(1000);                      // Espera 1 segundo
  digitalWrite(LED_BUILTIN, LOW);   // Apaga o LED
  delay(1000);                      // Espera 1 segundo
}