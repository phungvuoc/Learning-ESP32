#include <Arduino.h>

#define DAC1 25
//255 = 3.3V, 128 = 1.65V
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int value = 0; value <= 255; value++){
    dacWrite(DAC1, value);
    delay(15);
  }

  for(int value = 255; value >=0; value--){
    dacWrite(DAC1, value);
    delay(15);
  }
}