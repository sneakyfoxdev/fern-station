# Episode 02 — From the button of our heart (Button Control)

This episode adds control with a button. We start controlling an LED, and will expand on that in the next episodes.
Despite button bouncing effects, the blinking LED remains uninterrupted, as expected.

---

## 🎬 Watch the Episode

[YouTube](https://youtu.be/quboO_ei0jU)

---

## 📦 Bill of Materials

| Component | Quantity | Notes |
|------------|------------|--------|
| [ESP32 Dev Board](https://amzn.to/3MNZOFy)             | 1 | ESP32-WROOM-32 |
| [LED (5mm)](https://amzn.to/3OOnLwV)                   | 2 | Any color |
| [Resistor 220Ω](https://amzn.to/4bXv3YY)               | 2 | Current limiting |
| [Breadboard and Jumper Wires](https://amzn.to/4rjHmUh) | 1 | Standard |
| [Button](https://amzn.to/46kvk4H)                      | 1 | Standard |

---

## 🔌 Wiring

GPIO 23 → LED1 Anode  
LED1 Cathode → 220Ω → GND

GPIO 18 → Button → GND (internal pull-up enabled)
GPIO 25 → LED2 Anode  
LED2 Cathode → 220Ω → GND

Recommended LEDs current:
~10–15mA

---

## 🧠 Firmware Concept

We add a button controlling an LED.
The button uses the ESP32 internal pull-up resistor avoiding the need for an external resistor.
The button logic is inverted. 
Because INPUT_PULLUP pulls the pin HIGH, pressing the button pulls it LOW.

---

## 🚀 How to Upload

1. Open Arduino IDE
2. Select Board: ESP32 Dev Module
3. Select correct COM port
4. Upload firmware
5. Open Serial Monitor at 115200 baud

---

## 🧪 Expected Output

The heartbeat LED continues to blink every second, uninterrupted.

The button LED will turn ON and OFF controlled by the external button.
Occasionally, this LED will flicker due to button bounce.

---

## 🐛 Troubleshooting

- Ensure correct board is selected.
- Install ESP32 board package.
- Verify correct GPIO pin number.

---

## 🔮 Next Episode

Next, we introduce button debounce logic and modes.

---
