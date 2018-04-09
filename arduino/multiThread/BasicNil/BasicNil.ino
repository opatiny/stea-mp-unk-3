// based on https://github.com/Hackuarium/simple-spectro/tree/master/tutorial/arduino/BasicNil (04.09.2018 EN)

#include <NilRTOS.h>

#define GREEN_LED_PIN 8
#define RED_LED_PIN   6

void setup() {
  nilSysBegin();
}
void loop() {}

NIL_WORKING_AREA(waThreadGreen, 16);
NIL_THREAD(ThreadGreen, arg) {
  pinMode(GREEN_LED_PIN, OUTPUT);
  while (TRUE) {
    digitalWrite(GREEN_LED_PIN, HIGH);
    nilThdSleep(49); // need to use this method otherwise next thread will not be executed
    digitalWrite(GREEN_LED_PIN, LOW);
    nilThdSleep(49); // need to use this method otherwise next thread will not be executed
  }
}

NIL_WORKING_AREA(waThreadRed, 128);
NIL_THREAD(ThreadRed, arg) {
  pinMode(RED_LED_PIN, OUTPUT);
  while (TRUE) {
    digitalWrite(RED_LED_PIN, HIGH);
    nilThdSleep(81); // need to use this method otherwise next thread will not be executed
    digitalWrite(RED_LED_PIN, LOW);
    nilThdSleep(81); // need to use this method otherwise next thread will not be executed
  }
}

NIL_THREADS_TABLE_BEGIN()
NIL_THREADS_TABLE_ENTRY("thread1", ThreadGreen, NULL, waThreadGreen, sizeof(waThreadGreen))
NIL_THREADS_TABLE_ENTRY("thread2", ThreadRed, NULL, waThreadRed, sizeof(waThreadRed))
NIL_THREADS_TABLE_END()

