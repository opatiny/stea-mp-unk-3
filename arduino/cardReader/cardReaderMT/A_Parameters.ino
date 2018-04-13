/*********************************************
   This file is used to declare the parameters
   table used by the program.

   We use the EEPROM for saving the parameters
   changed by the user during the functionment
   of the Bioreactor.

   The parameters are loaded during the boot.

   All important changes made on a parameter are saved
   in the EEPROM.
 *********************************************/


#define MAX_PARAM 26   // If the MAX_PARAM change you need to change the pointer in the EEPROM


#define PARAM_LUMINOSITY   0
#define PARAM_TEMPERATURE  1
#define PARAM_SWITCH       2
#define PARAM_LED_1        3
#define PARAM_LED_2        4
#define PARAM_SCAN_1       5 // hash is returned on 2 16 bits binaries. -> scan 1 and 2
#define PARAM_SCAN_2       6
#define PARAM_SCAN_ENABLED 7
#define PARAM_MODE         8 // mode selected with button position (off, playlist or single song)


#define INT_MAX_VALUE       32767
#define LONG_MAX_VALUE      2147483647


void resetParameters() { // turn all parameters to 0
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

