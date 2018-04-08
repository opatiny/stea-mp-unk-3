// Wire Slave Sender
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Sends data as an I2C/TWI slave device
// Refer to the "Wire Master Reader" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

char command = 0x00;

void setup() {
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onReceive(receiveEvent); // register event
  Wire.onRequest(requestEvent); // register event
  Serial.begin(9600);
}

void loop() {
  delay(100);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {

  switch (command) {
    case 0x00:
      digitalWrite(6, HIGH);
      break;
    case 0x01:
      digitalWrite(6, LOW);
      break;
    default:
      Wire.write(command);
      Wire.write(command+1);
      Wire.write(command+2);
      Wire.write(command+3);
  }
}

void receiveEvent() {
  while (Wire.available()) { // loop through all but the last
    command = Wire.read(); // receive byte as a character
  }
}
