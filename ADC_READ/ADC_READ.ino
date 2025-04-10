#include <Arduino.h>

// Potentiometer is connected to GPIO 32 (Analog ADC1_4),3v3 & GND
 
const int potPin = 32 // centro del potenciometro
;

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.print("Analog value: ");
  Serial.println(potValue);
  delay(500);
}