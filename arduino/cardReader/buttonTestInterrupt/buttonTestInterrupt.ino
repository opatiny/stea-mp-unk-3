// testing button with interrupt to print pins state on change

#define PIN1 0
#define PIN2 1

#define  RED_LED     6 // red led
#define  GREEN_LED   8 // green led

void setup() {
  Serial.begin(9600);
  pinMode(PIN1, INPUT_PULLUP);
  pinMode(PIN2, INPUT_PULLUP);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(PIN1), pinsState, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIN2), pinsState, CHANGE);

}

long counter = 0;

void loop() {
  counter++;

  bool mode1 = digitalRead(PIN1);
  bool mode2 = digitalRead(PIN2);

  if (mode1 == 0) {
    digitalWrite(RED_LED, HIGH);
  } else {
    digitalWrite(RED_LED, LOW);
  }

  if (mode2 == 0) {
    digitalWrite(GREEN_LED, HIGH);
  } else {
    digitalWrite(GREEN_LED, LOW);
  }

  delay(1);
}

long lastEvent = 0; // trick to avoid deboucing

void pinsState() {
  bool mode1 = digitalRead(PIN1);
  bool mode2 = digitalRead(PIN2);
  if ((millis() - lastEvent) > 10) {
    Serial.print("PIN1: ");
    Serial.println(mode1);
    Serial.print("PIN2: ");
    Serial.println(mode2);

  }
  lastEvent = millis();
}
