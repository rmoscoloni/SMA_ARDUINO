const int16_t adcPin = PB1;
int adcReading = 0;

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
  delay(2500);
}

void loop() {
  adcReading = analogRead(PB1);
  Serial.println((float)adcReading);//4096/400
  delay(100);
}
