#include <Wire.h>

void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {
  for (byte i = 0; i < 20; i++) {
    Serial.print(i);
    Serial.print(": ");
    Wire.beginTransmission(0x40);
    Wire.write(i);
    Wire.endTransmission();
    Wire.requestFrom(0x40, 1);

    while (Wire.available()) { // slave may send less than requested
      char c = Wire.read(); // receive a byte as character
      Serial.print(c, BIN );         // print the character
    }
    Serial.println("");
    delay(10);
  }

  delay(10000);
}
