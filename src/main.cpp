#include <Arduino.h>

void setup() {
  pinMode(4, OUTPUT); // Set pin 4 to output
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
}

void loop() {
  digitalWrite(4, HIGH); // Turn on the LED on pin 4
  delay(500); // Wait for 500 milliseconds
  digitalWrite(4, LOW); // Turn off the LED on pin 4
  Serial.println("Hello World"); // Print "Hello World" to the serial monitor
  delay(2000); // Wait for 2 seconds (2000 milliseconds)
}
