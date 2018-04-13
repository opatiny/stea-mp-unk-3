// switch thread

#ifdef BUTTON_1 && BUTTON_2

NIL_WORKING_AREA(waThreadButton, 0);

NIL_THREAD(ThreadButton, arg) {


  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);

  while (true) {
    if (!digitalRead(BUTTON_1)) {
      setParameter(PARAM_MODE, 1); // single song mode
    } else if (!digitalRead(BUTTON_2)) {
      setParameter(PARAM_MODE, 2); // playlist mode
    } else {
      setParameter(PARAM_MODE, 0); // off mode
    }

    nilThdSleepMilliseconds(100);
  }
}

#endif

