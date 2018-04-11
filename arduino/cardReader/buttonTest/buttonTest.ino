#define PIN1 0
#define PIN2 1


void setup() {
  Serial.begin(9600);
  pinMode(PIN1, INPUT_PULLUP);
  pinMode(PIN2, INPUT_PULLUP);
}

void loop() {
  Serial.print("PIN1: ");
  Serial.println(digitalRead(PIN1));
  Serial.print("PIN2: ");
  Serial.println(digitalRead(PIN2));
  delay(1000);

}
