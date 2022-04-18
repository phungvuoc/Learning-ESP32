#include <Arduino.h>

const int ledPin = 5; //set output signal to pin 5
//pwm setting
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
  // put your setup code here, to run once:
  //setup pwm channel
  ledcSetup(ledChannel, freq, resolution);
  //connect channel to pin
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  // put your main code here, to run repeatedly:
  //light up
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){
    //changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
  //light down
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    //changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
}