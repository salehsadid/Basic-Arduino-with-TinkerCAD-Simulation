
# 🤖 Automatic Smart Hand Sanitizer using Arduino

A **contactless hand sanitizer dispenser** built using an Arduino, ultrasonic sensor, and servo motor. This smart hygiene station detects a nearby hand and automatically dispenses sanitizer — no physical touch required!

---

## 🔧 Required Components

- Arduino Uno (or Nano)
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (e.g., SG90)
- Jumper Wires
- Breadboard (optional)
- Sanitizer Bottle (with servo-compatible nozzle mechanism)
- Power Source (5V adapter or battery pack)

---

## ⚙️ How It Works

### 📏 Ultrasonic Distance Measurement

- The **HC-SR04 sensor** emits an ultrasonic pulse via its **Trig pin** and listens for the echo on the **Echo pin**.
- The **duration** of the returned pulse is used to calculate the **distance**:
  
  \[
  \text{Distance} = \frac{\text{Time} \times 0.034}{2}
  \]

### ✋ Hand Detection & Dispensing

- If the distance falls between **2 cm and 4 cm**, the system detects a hand.
- The **servo motor** activates and simulates pressing the bottle head with this sequence:
  
  ```
  0° → 90° → 180° → 90°
  ```

- After completing the rotation, the servo is **detached** to save power and avoid jittering.

### ✅ Touch-Free Hygiene

- No need to press anything — the entire operation is **fully automatic**.
- Ideal for reducing contact in high-traffic or sensitive environments.

---

## 🔍 Working Principle

This project combines:

- **Proximity detection** using ultrasonic sensing  
- **Servo actuation** to push the sanitizer bottle  
- **No-contact automation** for improved hygiene and safety

Perfect for use in **offices**, **homes**, **schools**, and **public spaces**, especially in health-conscious or pandemic-sensitive environments.

---

## 🛠️ Potential Enhancements

- Add an **LCD display** to show remaining sanitizer level
- Include **LED indicators** for status feedback
- Incorporate a **motion log system** using SD card or IoT module

---

## 🏷️ Hashtags

#SmartSanitizer #Arduino #ContactlessTech #UltrasonicSensor #ServoMotor  
#EmbeddedSystems #COVID19Prevention #Automation #DIYProjects  
#HygieneTech #ArduinoProjects #TouchlessDispenser
```

---
