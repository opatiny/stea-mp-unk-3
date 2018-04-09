/*********************************************
   This file is used to declare the parameters
   table used by the program.

   We use the EEPROM for saving the parameters
   changed by the user during the functionment
   of the Bioreactor.

   The parameter are loaded during the boot.

   All change to important parameters are saved
   to the EEPROM
 *********************************************/


#define MAX_PARAM 26   // If the MAX_PARAM change you need to change the pointer in the EEPROM


#define PARAM_LUMINOSITY   0
#define PARAM_TEMPERATURE  1
#define PARAM_SWITCH       2
#define PARAM_LED_1        3
#define PARAM_LED_2        4
#define PARAM_SCAN_1       5
#define PARAM_SCAN_2       6
#define PARAM_SCAN_ENABLED 7


#define INT_MAX_VALUE       32767
#define LONG_MAX_VALUE      2147483647


void resetParameters() {
  for (byte i = 0; i < 10; i++) {
    setAndSaveParameter(i, 0);
  }

  setQualifier(32767);
}

void checkParameters() {
    if (getParameter(PARAM_LUMINOSITY) < 0) {
    resetParameters();
  }
}

