# ☀️ Solar Tracker System Using Arduino and LDR

An intelligent dual-axis solar tracking system that aligns a solar panel towards the sun using **Light Dependent Resistors (LDRs)** and **servo motors**. This project enhances energy efficiency by optimizing solar panel orientation in real-time.

---

## 🔧 Required Components

- Arduino Uno  
- 4× LDRs (Light Dependent Resistors)  
- 2× Servo Motors (for dual-axis control)  
- 4× 10kΩ Resistors  
- Breadboard  
- Jumper wires  
- Power supply  
- Optional: Solar panel (for real implementation)

---

## ⚙️ Working Principle

A **solar tracker** maximizes energy output by ensuring the solar panel remains aligned with the sun throughout the day.

### 🔦 Light Detection (LDR Setup)

- 4 LDRs arranged in a **cross pattern**:
  - Top-Left (A0)
  - Bottom-Left (A1)
  - Top-Right (A2)
  - Bottom-Right (A3)
- Each LDR reads the ambient light in its direction.

### 📊 Analog Light Comparison

- Vertical movement = comparison between **Top Avg** and **Bottom Avg**
- Horizontal movement = comparison between **Left Avg** and **Right Avg**
- A threshold (e.g., `tol = 90`) determines if movement is necessary.

### 🔄 Servo Motor Control

- **Vertical Servo** (pin 10): Adjusts panel tilt  
- **Horizontal Servo** (pin 9): Rotates the panel left/right  
- Smooth and gradual servo adjustments with delays ensure accurate tracking.

### 🧠 Auto-Correction Logic

- If light differences are within the threshold, servos remain idle to reduce jitter.  
- Servo angles are clamped between defined min/max to prevent mechanical overrun.

---

## ✅ Advantages

- Real-time tracking for **maximum solar efficiency**
- Improves power output over static panels
- Demonstrates practical use of **sensors** and **actuators**

---

## 🌍 Applications

- Smart solar panel installations  
- Renewable energy projects  
- IoT-connected solar farms  
- Educational robotics and automation systems

---

## 🔧 Future Improvements

- Use an **RTC Module** for time-based tracking  
- Integrate **solar panel voltage sensors** for output analysis  
- Add **PID or feedback control** for greater precision

---

## 🏷️ Hashtags

#ArduinoProject #SolarTracker #LDRSensor #SmartSolar #RenewableEnergy  
#DualAxisTracker #ElectronicsEngineering #GreenEnergy #ServoMotor  
#EmbeddedSystems #DIYTech #IoTProject #Automation
