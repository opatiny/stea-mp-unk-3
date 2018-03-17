#define SIZE 5

#include <TimerThree.h>

boolean matrix[SIZE][SIZE]; // [rows][colums]

byte cols[] = {A5, A4, A3, A2, A1};
byte rows[] = {A0, 13, 10, 9, 11};


void setup() {
  delay(3000);
  for (byte i = 0; i < SIZE; i++) {
    for (byte j = 0; j < SIZE; j++) {
      matrix[i][j] = false;
    }
  }
  Timer3.initialize(10000);
  Timer3.attachInterrupt(refresh);
}

void loop() {
  off();
  delay(1000);
  H();
  delay(1000);
  E();
  delay(1000);
  L();
  delay(1000);
  off();
  delay(500);
  L();
  delay(1000);
  O();
  delay(1000);

}

void off() {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      matrix[col][row] = false;
    }
  }
}


void H() {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[SIZE - 3][col] = true;
    matrix[col][0] = true;
    matrix[col][SIZE - 1] = true;
  }
}

void E() {
  off();
  for (byte col = 0; col < SIZE; col++) {
    matrix[0][col] = true;
    matrix[SIZE - 3][col] = true;
    matrix[SIZE - 1][col] = true;
    matrix[col][SIZE - 1] = true;
  }
}

void L() {
  off();
  for (byte i = 0; i < SIZE; i++) {
    matrix[i][SIZE - 1] = true;
    matrix[SIZE - 1][i] = true;
  }
}

void O() {
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







