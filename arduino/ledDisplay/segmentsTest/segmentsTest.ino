

#include <Wire.h>
#include <PCA9685.h>


PCA9685 ledDriver;

void setup()
{
  Serial.begin(9600); // set up serial-
  Serial.println("Serial Started");

  Wire.begin();           // Wire must be started!
  ledDriver.begin(B000001);  // Address pins A5-A0 set to B111000
  ledDriver.init();

}

void loop() {

  for (int i = 0; i < 16; i++) {
    ledDriver.setLEDOn(i);
    delay(500);
    ledDriver.setLEDOff(i);
    delay(500);
  }

}

