# Episode 03 — Debounce Logic and Modes

This episode solves the button bounce problem and introduces two interaction modes: a short press toggles the LED, a long press turns it on permanently.

---

## 🎬 Watch the Episode

YouTube — coming soon

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

---

## 🧠 Firmware Concept

### Debounce

Mechanical buttons produce noisy transitions when pressed or released.
A 35ms debounce window filters this out: any state change resets a timer, and the new state is only accepted once the signal has been stable for the full duration.

### Two Modes

The firmware measures how long the button was held and reacts on release:

- **Short press** (< 900ms) — toggles LED2
- **Long press** (≥ 900ms) — turns LED2 on

---

## 🚀 How to Upload

1. Open Arduino IDE
2. Select Board: ESP32 Dev Module
3. Select correct COM port
4. Upload firmware
5. Open Serial Monitor at 115200 baud

---

## 🧪 Expected Output

The heartbeat LED continues to blink on fixed intervals, uninterrupted.

On short press, Serial Monitor prints `SHORT press` and LED2 toggles.
On long press, Serial Monitor prints `LONG press` and LED2 turns on.

---

## 🐛 Troubleshooting

- Ensure correct board is selected.
- Install ESP32 board package.
- Verify correct GPIO pin number.

---

## 🔮 Next Episode

Next, we refactor the button logic into a reusable `Button` struct.

---
