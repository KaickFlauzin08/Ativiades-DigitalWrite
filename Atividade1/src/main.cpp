#include <Arduino.h>


#define PINLED1 23
#define PINLED2 16

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(PINLED1, OUTPUT);
  pinMode(PINLED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(PINLED1, HIGH);
  Serial.println("LED BRANCO ACENDEU");
  delay(1000);
  digitalWrite(PINLED1, LOW);
  Serial.println("LED BRANCO APAGOU");
  delay(1000);

      digitalWrite(PINLED2, HIGH);
  Serial.println("LED AZUL ACENDEU");
  delay(1000);
  digitalWrite(PINLED2, LOW);
  Serial.println("LED AZUL APAGOU");
  delay(1000);
}
