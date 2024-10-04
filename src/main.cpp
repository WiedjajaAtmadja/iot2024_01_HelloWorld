#include <Arduino.h>
#ifdef BOARD_ESP32_DEVKITM_V1
  #define LED_PIN 4 // Define the pin for the LED
#elif BOARD_ESP32_C3_CORE
  #define LED_PIN 12 // Define the pin for the LED  
#endif
void setup() {
  pinMode(LED_PIN, OUTPUT); // Set pin 4 to output
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn on the LED on pin 4
  delay(500); // Wait for 500 milliseconds
  digitalWrite(LED_PIN, LOW); // Turn off the LED on pin 4
  Serial.println("Hello World"); // Print "Hello World" to the serial monitor
  delay(2000); // Wait for 2 seconds (2000 milliseconds)
}
