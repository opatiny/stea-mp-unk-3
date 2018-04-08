// writes LUC on a 5x5 led matrix

#define SIZE 5

#include <TimerThree.h>

boolean matrix[SIZE][SIZE];

byte cols[] = {A5, A4, A3, A2, A1};
byte rows[] = {A0, 13, 10, 9, 11};

void setup() {
  for (byte i = 0; i < SIZE; i++) {
    for (byte j = 0; j < SIZE; j++) {
      matrix[i][j] = true;
    }
  }

  Timer3.initialize(10000);
  Timer3.attachInterrupt(refresh); // refresh to run every 0.6 seconds

}

void loop() {

  on();
  delay(1000);
  off();
  delay(1000);
  square();
  delay(1000);
  cross();
  delay(1000);
    off();
  delay(1000);
  L();
  delay(1000);
  U();
  delay(1000);
  C();
  delay(1000);
  off();
  delay(1000);
}

void on() {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      matrix[col][row] = true;
    }
  }
}

void off() {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      matrix[col][row] = false;
    }
  }
}

void square() {
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = true;
    matrix[SIZE - 1][col] = true;
    matrix[col][0] = true;
    matrix[col][SIZE - 1] = true;
  }
}

void cross() {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[col][col] = true;
    matrix[SIZE - 1 - col][col] = true;
  }
}

void L() {
  off();
  for (byte i = 0; i < SIZE; i++) {
    matrix[i][SIZE - 1] = true;
    matrix[SIZE - 1][i] = true;
  }
}

void U() {
  off();
  for (byte i = 0; i < SIZE; i++) {
    matrix[i][0] = true;
    matrix[i][SIZE - 1] = true;
    matrix[SIZE - 1][i] = true;
  }
}

void C() {
  off();
  for (byte i = 0; i < SIZE; i++) {
    matrix[i][SIZE - 1] = true;
    matrix[0][i] = true;
    matrix[SIZE - 1][i] = true;
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

