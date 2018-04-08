#include <NilRTOS.h>
#include <avr/wdt.h> // watch dog for automatic reboot in case of crash
#include <TimeLib.h> // git clone https://github.com/PaulStoffregen/Time
#include "lib/Utility.h"



#define LUMINOSOTY    A6
#define TEMPERATURE   5
#define CARD_READER   1
#define RED_LED       6
#define GREEN_LED     8

void setup() {
  setupParameters();
  checkParameters(); // setup automatically the default parameter after install boot loader
  nilSysBegin();
}

void loop() {}

