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
  if (counter % 1000 == 0) {
    Serial.print("PIN1: ");
    Serial.println(digitalRead(PIN1));
    Serial.print("PIN2: ");
    Serial.println(digitalRead(PIN2));
  }
  delay(1);
}
