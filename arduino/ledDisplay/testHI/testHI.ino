

#include <Wire.h>
#include <PCA9685.h>


PCA9685 ledDriver;

void setup()
{
  Serial.begin(9600); // set up serial-
  Serial.println("Serial Started");

  Wire.begin();           // Wire must be started!
  ledDriver.begin(B000000);  // Address pins A5-A0 set to B111000
  ledDriver.init();

  for (int i = 0; i < 16; i++) {
    ledDriver.setLEDOff(i);
    delay(10);
  }

}

void loop() {

  ledDriver.setLEDOn(2);
  ledDriver.setLEDOn(6);
  ledDriver.setLEDOn(5);
  ledDriver.setLEDOn(4);
  ledDriver.setLEDOn(1);
  ledDriver.setLEDOn(15);
  ledDriver.setLEDOn(14);
  ledDriver.setLEDOn(11);  


}

