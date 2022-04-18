#include <Arduino.h>

const int potPin = 34;
int potValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(potPin, INPUT);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
}