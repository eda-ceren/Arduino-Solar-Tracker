#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5

#define BTN1 6
#define BTN2 7

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(BTN1, INPUT_PULLUP); // Butonlar GND'ye bağlıysa
  pinMode(BTN2, INPUT_PULLUP);
}

void loop() {
  // Buton 1'e basılırsa LED’ler sırayla yanar
  if (digitalRead(BTN1) == LOW) {
    digitalWrite(LED1, HIGH); delay(200);
    digitalWrite(LED2, HIGH); delay(200);
    digitalWrite(LED3, HIGH); delay(200);
    digitalWrite(LED4, HIGH); delay(200);

    digitalWrite(LED1, LOW); delay(200);
    digitalWrite(LED2, LOW); delay(200);
    digitalWrite(LED3, LOW); delay(200);
    digitalWrite(LED4, LOW); delay(200);
  }

  // Buton 2'ye basılırsa tüm LED’ler yanıp söner
  if (digitalRead(BTN2) == LOW) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(500);
  }
}
