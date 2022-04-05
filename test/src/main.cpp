#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Test");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Ja");
  delay(1000);
}