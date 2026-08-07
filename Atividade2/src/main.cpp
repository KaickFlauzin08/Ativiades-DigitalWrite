#include <Arduino.h>

#define PINLED1 23
#define PINLED2 16
#define PINLED3 17



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(PINLED1, OUTPUT);
  pinMode(PINLED2, OUTPUT);
  pinMode(PINLED3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(PINLED1, HIGH);
  Serial.println("LED VERMELHO ACENDEU");
  delay(3000);
  digitalWrite(PINLED1, LOW);
  Serial.println("LED VERMELHO APAGOU");
  delay(1000);

  digitalWrite(PINLED2, HIGH);
  Serial.println("LED AMARELO ACENDEU");
  delay(1000);
  digitalWrite(PINLED2, LOW);
  Serial.println("LED AMARELO APAGOU");
  delay(1000);

  digitalWrite(PINLED3, HIGH);
  Serial.println("LED VERDE ACENDEU");
  delay(2000);
  digitalWrite(PINLED3, LOW);
  Serial.println("LED VERDE APAGOU");
  delay(1000);
}
