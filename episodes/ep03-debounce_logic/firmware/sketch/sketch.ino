// Episode 3: No more buttons mixed signals!
#include "blinking_led.hpp"
#include "button_control.hpp"

void setup() {
  Serial.begin(115200);
  setup_heartbeat();
  setup_button_and_led();
}

void loop() {
  nonblocking_blink(1000);
  control_led_with_button();
}
