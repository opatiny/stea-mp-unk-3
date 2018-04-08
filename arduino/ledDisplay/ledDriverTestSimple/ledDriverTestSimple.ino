/*****************
   This example demonstrates the library assuming that LEDs are connected to the outputs
   It will run through all 16 LEDs turning them up and down in 10 steps.
   The PCA9685 chip is assumed to have PINS A0,A1 and A2 grounded (LOW) and A3,A4 and A5 set to VCC (5V, HIGH)

   - kasper
*/

#include <Wire.h>
#include <PCA9685.h>


PCA9685 ledDriver;

void setup()
{
  Serial.begin(9600); // set up serial
  Serial.println("Serial Started");

  Wire.begin();  // Wire must be started!
  ledDriver.begin(B0000000);  // Address pins A5-A0 set to B111000
  ledDriver.init();
}

void loop() {
  for (byte i = 0; i < 16; i++) {
    ledDriver.setLEDOn(i);
  }
  delay(5000);
  for (byte i = 0; i < 16; i++) {
    ledDriver.setLEDOff(i);
  }
  delay(5000);
}
