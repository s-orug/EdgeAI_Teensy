#include <Arduino.h>
#include <cstdio>

// Define the pin for the LED
const int ledPin = 13; // Built-in LED pin on Teensy 4.1
int i = 0;

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1 second
  
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1 second
  printf("%d\n", i);
  ++i;
}
