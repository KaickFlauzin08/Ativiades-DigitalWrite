#include <Arduino.h>

//LEDS = 34,35,32,23,16 
//BUZZER (SOM) = 22

#define Buzzer_PIN 22

int bluePins[] = {
  26,27,13,
};

int redPins[] = {
  23,16,
};

void setLeds (int blueState, int redState) {
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(bluePins[i], blueState);
  }
  for (int i = 0; i < 2; i++)
  {
    digitalWrite(redPins[i], redState);
  }
}
  
void setup() {
  Serial.begin(115200);
  
  for (int pinBlue : bluePins){
    pinMode(pinBlue, OUTPUT);
  }
  for (int pinRed : redPins){
    pinMode(pinRed, OUTPUT);
  }
  
  pinMode(Buzzer_PIN, OUTPUT);
}

void loop() 
{
  setLeds(HIGH, LOW);
  for (int hz = 600; hz <= 1200; hz += 15)
  {
    tone(Buzzer_PIN, hz);
    delay(5);
  }
  setLeds(LOW, HIGH);
  for (int hz = 1200; hz >= 600; hz -= 15)
  {
    tone(Buzzer_PIN, hz);
    delay(5);
  }
}