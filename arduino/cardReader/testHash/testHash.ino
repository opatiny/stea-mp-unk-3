// based on https://gist.github.com/badboy/6267743
// returns 32 bits hash of perf card connections, highly likely unique
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(5000);
  for (long i = 0; i < 100; i++) {
    Serial.print(i);
    Serial.print(" ");
    Serial.println(hash32shift(i), BIN);
  }
  delay(100000);
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
