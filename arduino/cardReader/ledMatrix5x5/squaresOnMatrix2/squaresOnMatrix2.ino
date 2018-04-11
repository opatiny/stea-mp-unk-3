// squares animation on platinium card (bicolor)
// value 0 turns leds off, 1 turns red on, 2 turns blue on

#define SIZE 5

#define delayTime 400

#include <TimerThree.h>

byte matrix[SIZE][SIZE]; // [rows][colums]

byte cols[] = {A5, A4, A3, A2, A1};
byte rows[] = {A0, 13, 10, 9, 11};


void setup() {
  delay(3000);
  for (byte i = 0; i < SIZE; i++) {
    for (byte j = 0; j < SIZE; j++) {
      matrix[i][j] = 0;
    }
  }
  Timer3.initialize(10000);
  Timer3.attachInterrupt(refresh);
}

void loop() {
  squareAnim();

}

void squareAnim() {
  squarePurple();
  delay(delayTime * 2);
  squareRed();
  delay(delayTime * 2);
  squareBlue();
  delay(delayTime * 2);
  square1(1);
  delay(delayTime);
  square2(2);
  delay(delayTime);
  square3(1);
  delay(delayTime);
  square4(2);
  delay(delayTime);
  square5(1);
  delay(delayTime);
  square4(2);
  delay(delayTime);
  square3(1);
  delay(delayTime);
  square2(2);
  delay(delayTime);
  square1(1);
  delay(delayTime);
}

void setValue(byte value) {
  for (byte col = 0; col < SIZE; col++) {
    for (byte row = 0; row < SIZE; row++) {
      matrix[col][row] = value;
    }
  }
}

void off() {
  setValue(0);
}

void squareRed() {
  off();
  setValue(1);
}

void squarePurple() {
  off();
  setValue(3);
}

void squareBlue() {
  off();
  setValue(2);
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







