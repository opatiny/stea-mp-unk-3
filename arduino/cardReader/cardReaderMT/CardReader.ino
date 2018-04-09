#ifdef CARD_READER

NIL_WORKING_AREA(waThreadCardReader, 32);

NIL_THREAD(ThreadCardReader, arg) {

  byte connPins[] = {A5, A4, A3, A2, A1, A0, 13, 10, 9, 11}; // from 10 to 1

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  long previousKey = 0;
  byte counter = 0;

  setParameter(PARAM_SCAN_ENABLED, 1);

  while (true) {
    long key = 0;
    if (getParameter(PARAM_SCAN_ENABLED) == 1) {

      for (byte i = 0; i < sizeof(connPins); i++) {
        digitalWrite(RED_LED, !digitalRead(RED_LED));
        nilThdSleepMilliseconds(30);
        for (byte j = 0; j < sizeof(connPins); j++) {
          pinMode(connPins[j], INPUT_PULLUP); // to avoid floating pins
        }
        pinMode(connPins[i], OUTPUT);
        digitalWrite(connPins[i], LOW);

        for (byte j = 0; j < sizeof(connPins); j++) {
          if (i != j) {
            key ^= digitalRead(connPins[j]) << j;
          }
        }

        key = hash32shift(key);

      }
      key ^= 0b1010001001111010001000110111111; // key obtained when no card is inserted, we use a xor to turn this value to zero (easier to recognise)
      if (key == previousKey && key != 0) {
        if (counter < 10) {
          counter++;
        }
      } else {
        previousKey = key;
        counter = 0;
      }
    } else {
      counter = 4;
      key=0xFFFFFFFF;
    }

    if (counter > 2) {
      setParameter(PARAM_SCAN_1, key >> 0 & 65535);
      setParameter(PARAM_SCAN_2, key >> 16 & 65535);
      digitalWrite(GREEN_LED, HIGH);
      nilThdSleepMilliseconds(5000);
      digitalWrite(GREEN_LED, LOW);
    } else {
      setParameter(PARAM_SCAN_1, 0);
      setParameter(PARAM_SCAN_2, 0);
    }

    nilThdSleepMilliseconds(400);
  }
}

long hash32shift(long key) {
  key = ~key + (key << 15); // key = (key << 15) - key - 1;
  key = key ^ (key >> 12);
  key = key + (key << 2);
  key = key ^ (key >> 4);
  key = key * 2057 + (key << 3) + (key << 11);
  key = key ^ (key >> 16);
  return key;
}

#endif

