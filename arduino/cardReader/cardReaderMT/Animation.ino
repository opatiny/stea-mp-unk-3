// Thred allowing detection of the "golden card" (matrix5x5). When card is detected, scanning stops and animation is run on the matrix.

#define SIZE 5

#include <TimerThree.h>

byte matrix[SIZE][SIZE]; // [rows][colums]

byte cols[] = {A5, A4, A3, A2, A1};
byte rows[] = {A0, 13, 10, 9, 11};



NIL_WORKING_AREA(waThreadAnimation, 32);

NIL_THREAD(ThreadAnimation, arg) {
  nilThdSleepMilliseconds(100);
  off();
  Timer3.initialize(10000);

  while (true) {
    pinMode(A5, OUTPUT);
    pinMode(A0, INPUT_PULLUP);
    digitalWrite(A5, LOW);
    int read1 = analogRead(A0);
    digitalWrite(A5, HIGH);

    pinMode(A5, INPUT_PULLUP);
    pinMode(A0, OUTPUT);
    digitalWrite(A0, LOW);
    int read2 = analogRead(A5);
    digitalWrite(A0, HIGH);


    Serial.print("read1  ");
    Serial.println(read1);
    Serial.print("read2  ");
    Serial.println(read2);

    if ((read1 > 100 && read1 < 800) || (read2 > 100 && read2 < 800)) {
      Timer3.attachInterrupt(refresh); // the function attached to timer3 will be executed like an interrupt (delay is defined )

      if ((read1 > 100 && read1 < 800) && (read2 > 100 && read2 < 800)) {
        setParameter(PARAM_SCAN_ENABLED, -1); // the values of PARAM_SCAN_ENABLED allow to attribute special keys to the led cards (used in CardReader)
        squarePlatinium();
      } else if (read2 > 100 && read2 < 800) {
        setParameter(PARAM_SCAN_ENABLED, -2);
        animRainbow(2);
      } else {
        setParameter(PARAM_SCAN_ENABLED, 0);
        squareGold();
      }
      Timer3.detachInterrupt();

    } else {
      setParameter(PARAM_SCAN_ENABLED, 1);
    }

    nilThdSleepMilliseconds(1000);
  }
}

// from here, code is adapted from test program for matrix5x5. Path: arduino/cardReader/ledMatrix5x5/squaresOnMatrix
void squareGold() {
  int delayTime = 500;
  square1(1);
  nilThdSleepMilliseconds(delayTime);
  square2(1);
  nilThdSleepMilliseconds(delayTime);
  square3(1);
  nilThdSleepMilliseconds(delayTime);
  square4(1);
  nilThdSleepMilliseconds(delayTime);
  square5(1);
  nilThdSleepMilliseconds(delayTime);
  square4(1);
  nilThdSleepMilliseconds(delayTime);
  square3(1);
  nilThdSleepMilliseconds(delayTime);
  square2(1);
  nilThdSleepMilliseconds(delayTime);
  square1(1);
  nilThdSleepMilliseconds(delayTime);
  off();
}

void sowaRainbow() {
  int delayTime = 500;
  S(2);
  nilThdSleepMilliseconds(delayTime);
  O(2);
  nilThdSleepMilliseconds(delayTime);
  W(2);
  nilThdSleepMilliseconds(delayTime);
  A(2);
  nilThdSleepMilliseconds(delayTime);
  off();
  nilThdSleepMilliseconds(delayTime);
}

void squarePlatinium() {
  int delayTime = 250;
  square1(1);
  nilThdSleepMilliseconds(delayTime);
  square2(2);
  nilThdSleepMilliseconds(delayTime);
  square3(1);
  nilThdSleepMilliseconds(delayTime);
  square4(2);
  nilThdSleepMilliseconds(delayTime);
  square5(1);
  nilThdSleepMilliseconds(delayTime);
  square4(2);
  nilThdSleepMilliseconds(delayTime);
  square3(1);
  nilThdSleepMilliseconds(delayTime);
  square2(2);
  nilThdSleepMilliseconds(delayTime);
  square1(1);
  nilThdSleepMilliseconds(delayTime);
  for (byte i = 0; i < 2; i++) {
    squareValue(1);
    nilThdSleepMilliseconds(delayTime);
    squareValue(2);
    nilThdSleepMilliseconds(delayTime);
    squareValue(3);
    nilThdSleepMilliseconds(delayTime);
  }
  for (byte i = 0; i < 10; i++) {
    filedSquare5(1, 2);
    nilThdSleepMilliseconds(delayTime / 2);
    filedSquare5(2, 1);
    nilThdSleepMilliseconds(delayTime / 2);
  }
  off();

}

void animRainbow(byte value) {
  int delayTime = 100;
  for (byte row = 0; row < SIZE; row++) {
    for (byte col = 0; col < SIZE; col++) {
      matrix[row][col] = value;
      nilThdSleepMilliseconds(delayTime);
    }
  }
  
  nilThdSleepMilliseconds(500);
  
  for (byte row = SIZE; row > 0; row--) {
    for (byte col = SIZE; col > 0; col--) {
      matrix[row-1][col-1] = 0;
      nilThdSleepMilliseconds(delayTime);
    }
  }
}


void squareValue(byte value) {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      matrix[col][row] = value;
    }
  }
}

void off() {
  squareValue(0);
}

void square1(byte value) {
  off();
  matrix[2][2] = value;
}


void square2(byte value) {
  off();
  matrix[2][1] = value;
  matrix[1][2] = value;
  matrix[2][3] = value;
  matrix[3][2] = value;
}

void square3(byte value) {
  off();
  for (byte col = 1; col < (SIZE - 1); col++) {
    matrix[1][col] = value;
    matrix[SIZE - 2][col] = value;
    matrix[col][1] = value;
    matrix[col][SIZE - 2] = value;
  }
}

void square4(byte value) {
  off();
  for (byte col = 0; col < 3; col++) {
    matrix[col][col + 2] = value;
    matrix[col + 2][col] = value;
    matrix[col][2 - col] = value;
    matrix[col + 2][4 - col] = value;
  }
}

void square5(byte value) {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = value;
    matrix[SIZE - 1][col] = value;
    matrix[col][0] = value;
    matrix[col][SIZE - 1] = value;
  }
}

void filedSquare5(byte value1, int value2) {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = value1;
    matrix[SIZE - 1][col] = value1;
    matrix[col][0] = value1;
    matrix[col][SIZE - 1] = value1;
  }
  for (byte col = 1; col < SIZE - 1; col++) {
    for (byte row = 1; row < SIZE - 1; row++) {
      matrix[col][row] = value2;
    }
  }
}

void S(byte value) {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = value;
    matrix[SIZE - 3][col] = value;
    matrix[SIZE - 1][col] = value;
  }
  matrix[1][4] = value;
  matrix[3][0] = value;
}

void O(byte value) {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = value;
    matrix[SIZE - 1][col] = value;
    matrix[col][0] = value;
    matrix[col][SIZE - 1] = value;
  }
}

void W(byte value) {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[SIZE - 1][col] = value;
    matrix[col][0] = value;
    matrix[col][SIZE - 3] = value;
    matrix[col][SIZE - 1] = value;
  }
}


void A(byte value) {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = value;
    matrix[SIZE - 3][col] = value;
    matrix[col][0] = value;
    matrix[col][SIZE - 1] = value;
  }
}

void refresh() {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      pinMode(rows[row], OUTPUT);
      pinMode(cols[col], OUTPUT);
      switch (matrix[col][row]) {
        case 3:
          digitalWrite(rows[row], LOW);
          digitalWrite(cols[col], HIGH);
        case 1:
          digitalWrite(rows[row], HIGH);
          digitalWrite(cols[col], LOW);
          break;
        case 2:
          digitalWrite(rows[row], LOW);
          digitalWrite(cols[col], HIGH);
          break;
      }
      pinMode(rows[row], INPUT);
      pinMode(cols[col], INPUT);
    }
  }
}

