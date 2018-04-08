// scanning perf cards with led blinking

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
#define    RED_LED      6
#define    GREEN_LED    8

byte connPins[] = {A5, A4, A3, A2, A1, A0, 13, 10, 9, 11}; // from 10 to 1
// declare the ledPin as an OUTPUT:

void setup() {
  pinMode(RED_LED , OUTPUT);
  pinMode(GREEN_LED , OUTPUT);
}

void loop() {
  digitalWrite(GREEN_LED, LOW);
  for (byte i = 0; i < sizeof(connPins); i++) {

    for (byte j = 0; j < sizeof(connPins); j++) {
      pinMode(connPins[j], INPUT_PULLUP); // to avoid floating pins
    }

    pinMode(connPins[i], OUTPUT);
    digitalWrite(connPins[i], LOW);

    for (byte j = 0; j < sizeof(connPins); j++) {
      digitalWrite(RED_LED, HIGH);
      if (i != j) {
        Serial.print( digitalRead(connPins[j]) );
      } else {
        Serial.print("x");
      }
      delay(25);
      digitalWrite(RED_LED, LOW);
      delay(25);
    }

    Serial.println("");

  }
  digitalWrite(GREEN_LED, HIGH);
  Serial.println("");
  delay(4000);
}
