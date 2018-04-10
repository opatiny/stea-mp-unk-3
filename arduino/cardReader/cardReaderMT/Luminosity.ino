// luminosity thread

#ifdef LUMINOSITY

NIL_WORKING_AREA(waThreadLuminosity, 0);

NIL_THREAD(ThreadLuminosity, arg) {
  pinMode(LUMINOSITY, INPUT);

  while (true) {
    setParameter(PARAM_LUMINOSITY, analogRead(LUMINOSITY) );
    nilThdSleepMilliseconds(1000);
  }
}

#endif

