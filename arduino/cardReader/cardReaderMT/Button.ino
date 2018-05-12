// switch thread

#ifdef BUTTON_1 && BUTTON_2

NIL_WORKING_AREA(waThreadButton, 0);

NIL_THREAD(ThreadButton, arg) {




  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  unsigned int counter = 0;
  while (true) {
    if (!digitalRead(BUTTON_1) && !digitalRead(BUTTON_2)) {
      setParameter(PARAM_MODE, 3);
    } else if (!digitalRead(BUTTON_1)) {
      setParameter(PARAM_MODE, 1); // single song mode
    } else if (!digitalRead(BUTTON_2)) {
      setParameter(PARAM_MODE, 2); // playlist mode
    } else {
      setParameter(PARAM_MODE, 0); // off mode
    }

    nilThdSleepMilliseconds(100);

    counter++;
    /*
        if (getParameter(PARAM_MODE) != 0) {
          if (counter%20==0) {
            digitalWrite(7, HIGH);
          }
          if (counter%20==10) {
              digitalWrite(7, LOW);
          }
        } else {
          digitalWrite(7, LOW);
        }
    */

  }
}

#endif

