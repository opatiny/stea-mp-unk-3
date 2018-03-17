// based on AnalogInput example : http://www.arduino.cc/en/Tutorial/AnalogInput

// to adapt display luminosity depending on ambient light


#define    LDR_PIN    A6    // select the input pin for the potentiometer
#define    LED_PIN    6     // select the pin for the LED

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(LED_PIN , OUTPUT);
}

void loop() {
  // read the value from the sensor:
  int luminosity = analogRead(LDR_PIN);
  Serial.println(luminosity);
  analogWrite(LED_PIN, 255 - luminosity/4);

  delay(100);
}

