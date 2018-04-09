void setup() {
  pinMode(A5, OUTPUT);
  pinMode(A0, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(A5, LOW);
  int read = analogRead(A0);
  Serial.println(read);
  delay(1000);
}
