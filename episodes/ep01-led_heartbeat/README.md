# Episode 01 — At a Blink of a LED (LED Heartbeat)

This episode builds the timing foundation of the Fern Station firmware.

We implement a non-blocking LED heartbeat using `millis()` instead of `delay()`.

---

## 🎬 Watch the Episode

[YouTube](https://www.youtube.com/watch?v=lMF0cNxmGCw)

---

## 📦 Bill of Materials

| Component | Quantity | Notes |
|------------|------------|--------|
| [ESP32 Dev Board](https://amzn.to/3MNZOFy) | 1 | ESP32-WROOM-32 |
| [LED (5mm)](https://amzn.to/3OOnLwV) | 1 | Any color |
| [Resistor 220Ω](https://amzn.to/4bXv3YY) | 1 | Current limiting |
| [Breadboard and Jumper Wires](https://amzn.to/4rjHmUh) | 1 | Standard |

---

## 🔌 Wiring

GPIO 23 → LED Anode  
LED Cathode → 220Ω → GND

Ensure resistor is placed in series.

---

## 🧠 Firmware Concept

We avoid `delay()` to keep the system responsive.

Instead, we:
- Store a static timestamp
- Compare with `millis()`
- Toggle the LED when interval expires

This pattern becomes the timing backbone for all future episodes.

---

## 🚀 How to Upload

1. Open Arduino IDE
2. Select Board: ESP32 Dev Module
3. Select correct COM port
4. Upload firmware
5. Open Serial Monitor at 115200 baud

---

## 🧪 Expected Output

LED blinks every second.

Serial Monitor prints:  
Beep  
Beep  
Beep

---

## 🐛 Troubleshooting

- Ensure correct board is selected.
- Install ESP32 board package.
- Verify correct GPIO pin number.

---

## 🔮 Next Episode

Next we introduce a button input layer and begin separating input logic from timing logic.

---
