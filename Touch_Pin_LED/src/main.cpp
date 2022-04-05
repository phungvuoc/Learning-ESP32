#include <Arduino.h>

// set pin numbers
#define touchPin T0 //GIPO 4
const int ledPin = 16;

// set the threshold
const int threshold = 20;
// variable for storing the touch pin value
int touchValue;

void setup(){
  Serial.begin(115200);
  delay(1000); //time to bring up serial monitor
  // initialize the LED pin as an output
  pinMode (ledPin, OUTPUT);
}

void loop(){
  // read the state of the pushbutton value
  touchValue = touchRead(touchPin);
  Serial.print(touchValue);
  // check if the touch pin value is below the threshold
  if(touchValue < threshold){
    // if it is, turn the led on
    digitalWrite(ledPin, HIGH);
    Serial.println(" - LED on");
  }
  else{
    // if not, turn off
    digitalWrite(ledPin, LOW);
    Serial.println(" - LED off");
  }
  delay(500);
}