#define  RED_LED     6 // red led
#define  GREEN_LED   8 // green led

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  digitalWrite(RED_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(1000);

  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
  delay(1000);
}
