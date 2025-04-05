
# 🧪 Capacitance Meter Using Arduino

This project demonstrates how to build a simple **capacitance meter** using an **Arduino**. It measures the capacitance of a capacitor by timing how long it takes to charge through a known resistor. The result is displayed in **nanofarads (nF)** or **microfarads (µF)** depending on the value.

---

## 🧰 Required Components
- Arduino board (e.g., **Uno**, **Mega**)
- **Resistor** – 1kΩ (known resistor)
- **Capacitor** – to be measured
- **Breadboard**
- **Jumper wires**

---

## ⚙️ How It Works

### 🔌 Charging the Capacitor
- The capacitor is charged through a **known resistor** using:
  ```cpp
  digitalWrite(chargePin, HIGH);
  ```
- The **Arduino timer** (`millis()`) starts tracking how long it takes to charge.
- The **analog pin** continuously monitors the voltage.
- Once the voltage reaches **~61% of supply voltage** (~3.05V from 5V), the charging time is recorded.

### 📐 Calculating Capacitance
- The capacitance is calculated using the formula:
  ```
  C = (T / R) * 1000
  ```
  Where:
  - `T` is the charging time in milliseconds.
  - `R` is the resistance in ohms.
  - `C` is in **nanofarads (nF)**.

- If `C > 1000`, it is displayed in **microfarads (µF)**.

### ⚡ Discharging the Capacitor
- A separate **discharge pin** is set to LOW to safely discharge the capacitor before the next reading.

---

## 🔍 Working Principle

The charging of the capacitor follows the exponential formula:
```
V = Vmax * (1 - e^(-t / RC))
```
Where:
- `V` is the voltage across the capacitor at time `t`
- `Vmax` is the supply voltage (5V)
- `R` is the known resistance (1kΩ)
- `C` is the unknown capacitance

- The Arduino uses:
  ```cpp
  analogRead(analogPin) < 610
  ```
  to detect the 61% threshold (0.61 × 1023 ≈ 610).

---

## 🧪 Measurement Steps

```text
1. Set chargePin HIGH to begin charging.
2. Start timer (millis()).
3. Monitor analogPin until voltage crosses 61%.
4. Stop timer and calculate time difference.
5. Use formula to compute capacitance.
6. Discharge capacitor via dischargePin.
7. Repeat.
```

---

## 📎 Notes

- Ideal for measuring **electrolytic capacitors**, **ceramic capacitors**, and other discrete components.
- Ensure capacitors are **fully discharged** before inserting into the circuit to avoid damage.
- This basic method works best for capacitors in the **nF to µF** range.

---

## 🛠️ Optional Enhancements
- Display capacitance on an **LCD or OLED screen**.
- Add a **push button** to trigger measurement manually.
- Use **interrupts** or **more accurate timers** for higher precision.

---
#Arduino #CapacitanceMeter #Electronics #DIYProjects #EmbeddedSystems #CircuitDesign #IoT #Sensors #ArduinoProjects #TestingTools
