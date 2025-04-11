# PIR Motion Detection System with Arduino

This project demonstrates how to interface a **PIR Motion Sensor** with an Arduino to detect human movement. When motion is detected, an LED turns on and a message is printed to the Serial Monitor. This setup is ideal for home security, automation systems, and basic motion-triggered applications.

---

## 🔧 Required Components

- Arduino Uno (or compatible board)  
- PIR Motion Sensor  
- LED  
- 220Ω Resistor  
- Breadboard  
- Jumper Wires  

---

## 💡 How It Works

### 🛠️ Sensor Initialization

- **PIR sensor** is connected to **digital pin 13**.
- **LED** is connected to **digital pin 12** through a 220Ω resistor.

### 🚶‍♂️ Motion Detection Logic

- When motion is detected (change in infrared radiation):
  - The PIR sensor outputs **HIGH**.
  - The Arduino:
    - **Turns ON the LED**
    - Prints **"Motion Detected"** to the Serial Monitor

### 😴 No Motion

- When no motion is detected:
  - The PIR sensor outputs **LOW**
  - The LED remains **OFF**

---

## ⚙️ Working Principle

- **PIR (Passive Infrared) sensors** detect IR radiation emitted by warm bodies like humans or animals.
- When a moving object changes the IR pattern, the sensor sends a HIGH signal.
- This is read by the Arduino to trigger actions such as activating an LED or logging an event.

---

## 📚 Applications

- Intruder or human detection systems  
- Smart lighting automation  
- Energy-saving home systems  
- Basic robotic sensing  
- Motion-activated alerts

---


## 🏷️ Hashtags

#Arduino #PIRSensor #MotionDetection #EmbeddedSystems #DIYElectronics #SecuritySystem #IoTProjects #HomeAutomation #ArduinoProjects #HumanDetection
