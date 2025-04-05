# Light Intensity Measurement Using LDR Sensor

This project uses an LDR (Light Dependent Resistor) sensor with an Arduino to measure ambient light levels and adjust an LED’s brightness accordingly. It’s a great example of real-time analog input processing and output control, perfect for smart lighting systems and automation applications.

---

## 🔧 Required Components

- Arduino board (e.g., Arduino Uno)  
- LDR sensor (Light Dependent Resistor)  
- 10kΩ resistor (for voltage divider)  
- LED (for brightness indication)  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### 🔦 Light Detection
- The **LDR** changes its resistance based on the surrounding light level.
- Combined with a **10kΩ resistor**, it forms a **voltage divider** circuit.
- The voltage output is read by the Arduino through the **A0 analog pin**.

### 🧠 Data Processing
- Arduino reads the analog value (0–1023) from the LDR.
- This value is sent to the **Serial Monitor** for real-time observation.
- The value is mapped to a range of **0–255** using `map()` and sent to the LED using `analogWrite()` for PWM brightness control.

### 💡 LED Brightness Control
- **More Light** → **Lower LED Brightness**
- **Less Light** → **Higher LED Brightness**

This simulates an automatic lighting system that adjusts based on environmental brightness.

---

## 📚 Applications

- Smart lighting systems  
- Smart home automation  
- Environmental monitoring  
- Solar tracking systems  

---


## 🏷️ Hashtags

#Arduino #LDRSensor #LightIntensity #EmbeddedSystems #SmartLighting #IoT #DIYProject #Electronics #Tech #Engineering
