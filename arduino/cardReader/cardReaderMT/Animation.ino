// Thred allowing detection of the "golden card" (matrix5x5). When card is detected, scanning stops and animation is run on the matrix.

#define SIZE 5
#define delayTime 130
#include <TimerThree.h>

boolean matrix[SIZE][SIZE]; // [rows][colums]

byte cols[] = {A5, A4, A3, A2, A1};
byte rows[] = {A0, 13, 10, 9, 11};



NIL_WORKING_AREA(waThreadAnimation, 32);

NIL_THREAD(ThreadAnimation, arg) {

  for (byte i = 0; i < SIZE; i++) {
    for (byte j = 0; j < SIZE; j++) {
      matrix[i][j] = false;
    }
  }
  Timer3.initialize(10000);

  while (true) {
    pinMode(A5, OUTPUT);
    pinMode(A0, INPUT_PULLUP);
    digitalWrite(A5, LOW);
    int read = analogRead(A0);
    digitalWrite(A5, HIGH);
    if (read > 100 && read < 600) {

      setParameter(PARAM_SCAN_ENABLED, 0);
      Timer3.attachInterrupt(refresh); // the function attached to timer3 will be executed like an interrupt (delay is defined )
      squareAnim();
      Timer3.detachInterrupt();

    } else {
       setParameter(PARAM_SCAN_ENABLED, 1);
    }

    nilThdSleepMilliseconds(100);
  }
}

// from here, code is adapted from test program for matrix5x5. Path: arduino/cardReader/ledMatrix5x5/squaresOnMatrix
void squareAnim() {
  square1();
  nilThdSleepMilliseconds(2*delayTime);
  square2();
  nilThdSleepMilliseconds(delayTime);
  square3();
  nilThdSleepMilliseconds(delayTime);
  square4();
  nilThdSleepMilliseconds(delayTime);
  square5();
  nilThdSleepMilliseconds(2*delayTime);
  square4();
  nilThdSleepMilliseconds(delayTime);
  square3();
  nilThdSleepMilliseconds(delayTime);
  square2();
  nilThdSleepMilliseconds(delayTime);
}

void off() {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      matrix[col][row] = false;
    }
  }
}

void square1() {
  off();
  matrix[2][2] = true;
}

void square2() {
  off();
  matrix[2][1] = true;
  matrix[1][2] = true;
  matrix[2][3] = true;
  matrix[3][2] = true;
}

void square3() {
  off();
  for (byte col = 1; col < (SIZE - 1); col++) {
    matrix[1][col] = true;
    matrix[SIZE - 2][col] = true;
    matrix[col][1] = true;
    matrix[col][SIZE - 2] = true;
  }
}

void square4() {
  off();
  for (byte col = 0; col < 3; col++) {
    matrix[col][col + 2] = true;
    matrix[col + 2][col] = true;
    matrix[col][2 - col] = true;
    matrix[col + 2][4 - col] = true;
  }
}

void square5() {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = true;
    matrix[SIZE - 1][col] = true;
    matrix[col][0] = true;
    matrix[col][SIZE - 1] = true;
  }
}


void refresh() {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      if (matrix[col][row]) {
        pinMode(rows[row], OUTPUT);
        digitalWrite(rows[row], HIGH);
        pinMode(cols[col], OUTPUT);
        digitalWrite(cols[col], LOW);
        pinMode(rows[row], INPUT);
        pinMode(cols[col], INPUT);
      }
    }
  }
}
