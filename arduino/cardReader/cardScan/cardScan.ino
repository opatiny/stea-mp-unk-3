// scans the perf card and returns connections for every pin (on 10 lines)

// results obtained with first card ever
/* x111111110
   1x11111101
   11x1111011
   111x110111
   1111x01111
   11110x1111
   111011x111
   1101111x11
   10111111x1
   011111111x
*/


byte connPins[] = {A5, A4, A3, A2, A1, A0, 13, 10, 9, 11}; // from 10 to 1

void setup() {

}

void loop() {
  for (byte i = 0; i < sizeof(connPins); i++) {
    for (byte j = 0; j < sizeof(connPins); j++) {
      pinMode(connPins[j], INPUT_PULLUP); // to avoid floating pins
    }
    pinMode(connPins[i], OUTPUT);
    digitalWrite(connPins[i], LOW);
    
    for (byte j = 0; j < sizeof(connPins); j++) {
      if (i != j) {
        Serial.print( digitalRead(connPins[j]) );
      } else {
        Serial.print("x");
      }
    }

    Serial.println("");

  }
  Serial.println("");
  delay(2000);
}
