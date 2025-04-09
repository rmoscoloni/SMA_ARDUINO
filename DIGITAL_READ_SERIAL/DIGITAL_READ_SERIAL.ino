/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(250000);
}

// the loop routine runs over and over again forever:
int i = 0;
void loop() {
  i++;
  float j = float(i)/3.0;
  Serial.print(i);
  Serial.print(",");
  Serial.print(j);
  Serial.print(",");
  Serial.print(float(micros())/1000000.0);
  Serial.print("\n");
  delay(5);
}
