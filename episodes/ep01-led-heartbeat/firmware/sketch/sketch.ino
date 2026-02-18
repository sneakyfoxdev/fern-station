// Episode 1: At a blink of a LED
#include "blinking_led.hpp"

void setup() {
  Serial.begin(115200);
  setup_heartbeat();
}

void loop() {
  nonblocking_blink(1000);

}
