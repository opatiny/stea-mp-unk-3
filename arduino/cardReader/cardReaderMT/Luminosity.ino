#ifdef LUMINOSOTY

NIL_WORKING_AREA(waThreadLuminosity, 0);

NIL_THREAD(ThreadLuminosity, arg) {
  pinMode(LUMINOSOTY, INPUT);

  while (true) {
    setParameter(PARAM_LUMINOSITY, analogRead(LUMINOSOTY) );
    nilThdSleepMilliseconds(1000);
  }
}

#endif

