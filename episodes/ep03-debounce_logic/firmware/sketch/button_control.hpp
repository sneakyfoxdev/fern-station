// Episode 2: Add a basic button controlling a LED.
// Episode 3: Add button debounce and modes.
#pragma once

#include <Arduino.h>

static constexpr int PIN_LED2   = 25;
static constexpr int PIN_BUTTON = 18;

static constexpr uint32_t DEBOUNCE_MS  = 35;
static constexpr uint32_t LONGPRESS_MS = 900;

static bool     stable        = true;
static bool     lastReading   = true;
static uint32_t lastChange_ms = 0;
static uint32_t pressStart_ms = 0;
static bool     pressed       = false;

void setup_button_and_led() {
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_BUTTON, INPUT_PULLUP);

  digitalWrite(PIN_LED2, LOW); // It is good practice setting up an initial value, for OUTPUT PINs.
}

void control_led_with_button() {
  // button with two modes.
  const bool reading = digitalRead(PIN_BUTTON);
  uint32_t now = millis();

  // debounce
  if (reading != lastReading) {
    lastReading   = reading;
    lastChange_ms = now;
  }
  if (now - lastChange_ms < DEBOUNCE_MS) {
    return;
  }

  if (reading != stable) {
    stable = reading;
    if (stable == LOW) {
      pressStart_ms = now;
      pressed = true;
    } else {
      if (pressed) {
        pressed = false;
        uint32_t held = now - pressStart_ms;
        if (held >= LONGPRESS_MS) {
          Serial.println("LONG press");
          digitalWrite(PIN_LED2, HIGH);
        } else {
          Serial.println("SHORT press");
          digitalWrite(PIN_LED2, !digitalRead(PIN_LED2));
        }
      }
    }
  }
}
