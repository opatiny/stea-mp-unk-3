#include <TimerThree.h>

void setup() {
  Timer3.initialize(1000000); //in microseconds
  Timer3.attachInterrupt(hi); //with this syntax, you can only have one interrupt per timer
}

void loop() {

}

void hi() {
  Serial.println("Hi!");
}

