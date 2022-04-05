#include <Arduino.h>
//Button as interrupt
const int buttonPin = 18;

//Led setting
const int ledPin = 19;
volatile bool ledState = false;

void IRAM_ATTR isr() {
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
  Serial.printf("%u\t", ledState);
}

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), isr, FALLING);
  digitalWrite(ledPin, ledState);
}

void loop() {
}