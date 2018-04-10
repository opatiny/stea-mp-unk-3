// setting all threads on + defining threads order of priority.


NIL_WORKING_AREA(waThreadMonitoring, 0);
NIL_THREAD(ThreadMonitoring, arg) {
  nilThdSleepMilliseconds(1000);
  wdt_enable(WDTO_8S);  //activate the watchdog
  while (TRUE) {
    wdt_reset();//reset avoids automatic reboot
    nilThdSleepMilliseconds(500);
  }
}


NIL_THREADS_TABLE_BEGIN()
// the order should be exact, Acquisition has the higher priority ...


NIL_THREADS_TABLE_ENTRY(NULL, ThreadAnimation, NULL, waThreadAnimation, sizeof(waThreadAnimation))


NIL_THREADS_TABLE_ENTRY(NULL, ThreadSerial, NULL, waThreadSerial, sizeof(waThreadSerial))

#ifdef LUMINOSITY
NIL_THREADS_TABLE_ENTRY(NULL, ThreadLuminosity, NULL, waThreadLuminosity, sizeof(waThreadLuminosity))
#endif

#ifdef TEMPERATURE
NIL_THREADS_TABLE_ENTRY(NULL, ThreadTemperature, NULL, waThreadTemperature, sizeof(waThreadTemperature))
#endif

#ifdef CARD_READER
NIL_THREADS_TABLE_ENTRY(NULL, ThreadCardReader, NULL, waThreadCardReader, sizeof(waThreadCardReader))
#endif



NIL_THREADS_TABLE_ENTRY(NULL, ThreadMonitoring, NULL, waThreadMonitoring, sizeof(waThreadMonitoring))


NIL_THREADS_TABLE_END()

