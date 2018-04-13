// including libraries, defining main pins used and setting up general setup and loop.

#include <NilRTOS.h>
#include <avr/wdt.h> // watch dog for automatic reboot in case of crash
#include <TimeLib.h> // git clone https://github.com/PaulStoffregen/Time
#include "lib/Utility.h"


// setting sensors pins
#define LUMINOSITY    A6
#define TEMPERATURE   5

#define CARD_READER   1
#define WIRE_SLAVE    8 // address of the I2C slave

// defining LEDs pins
#define RED_LED       6
#define GREEN_LED     8

// defining button pins
#define BUTTON_1      0
#define BUTTON_2      1


void setup() {
  setupParameters();
  checkParameters(); // setup automatically the default parameter after install boot loader
#ifdef WIRE_SLAVE
  startWireSlave();
#endif
  nilSysBegin();
}

void loop() {}

