// based on https://gist.github.com/badboy/6267743
// returns 32 bits hash of perf card connections, highly likely unique
// code is based on arduino/cardscan and arduino/testHash

#define RED_LED 6
#define GREEN_LED 8

void setup() {
  Serial.begin(9600);

}


void loop() {
  byte connPins[] = {A5, A4, A3, A2, A1, A0, 13, 10, 9, 11}; // from 10 to 1

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  long previousKey = 0;

  long key = 0;

  for (byte i = 0; i < sizeof(connPins); i++) {
    digitalWrite(RED_LED, !digitalRead(RED_LED));
    delay(30);
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

  if (previousKey != key) {
    Serial.println(key, HEX);
  }

  delay(1000);
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
