// Episode 2: Add a basic button controlling a LED.
#pragma once

#include <Arduino.h>

static constexpr int PIN_LED2   = 25;
static constexpr int PIN_BUTTON = 18;

void setup_button_and_led() {
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_BUTTON, INPUT_PULLUP);

  digitalWrite(PIN_LED2, LOW); // It is good practice setting up an initial value, for OUTPUT PINs.
}

void control_led_with_button() {
  // basic button logic.
  static bool lastReading = true;
  const bool reading = digitalRead(PIN_BUTTON);
  if (lastReading == true && reading == false) {
    digitalWrite(PIN_LED2, !digitalRead(PIN_LED2));
    Serial.println("Button pressed -> LED toggled");
  }
  lastReading = reading;
}