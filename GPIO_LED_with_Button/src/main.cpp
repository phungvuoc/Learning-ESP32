/*
Date: 08/08/2021
Author: Uisshu
In this program, the led will be turned on and off with the push of a button:
  - pressed: on
  - released: off
*/
#include <Arduino.h>
// We assigned a name LED pin to pin number 22
const int LedPin = 22; 
// this will assign the name Button Pin to pin numer 15
const int ButtonPin = 15;
//Variable to store the button state
int ButtonState = 0;
// This Setup function is used to initialize everything 
void setup()
{
// This statement will declare pin 22 as digital output 
  pinMode(LedPin, OUTPUT);
// This statement will declare pin 15 as digital input 
  pinMode(ButtonPin, INPUT);
}

void loop()
{
// digitalRead function stores the Push button state 
// in variable ButtonState
  ButtonState = digitalRead(ButtonPin);
// if condition checks if push button is pressed
// if pressed LED will turn on otherwise remain off 
  digitalWrite(LedPin, ButtonState);
}