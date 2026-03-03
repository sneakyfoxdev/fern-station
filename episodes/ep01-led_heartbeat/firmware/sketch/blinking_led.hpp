// Episode 1: Add Setup and non-blocking Logic for our blinking-heartbeat-LED.
#pragma once

#include <Arduino.h>

static constexpr int PIN_LED1 = 23;

void setup_heartbeat() {
  pinMode(PIN_LED1, OUTPUT);
  digitalWrite(PIN_LED1, LOW); // It is good practice setting up an initial value.
}

void nonblocking_blink(const uint32_t time_ms) {
  static uint32_t t0 = 0;
  const uint32_t now = millis();
  if (now - t0 >= time_ms) {
    t0 += time_ms; // it could be t0 = now. But this way we avoid drifting from the expected interval with any loop delay.
    digitalWrite(PIN_LED1, !digitalRead(PIN_LED1));
    Serial.println("Beep (LED toggled)");
  }
}