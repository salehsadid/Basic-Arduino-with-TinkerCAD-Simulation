# Fire Alarm Using Temperature and Gas Sensor

This Arduino-based project combines temperature and gas sensors to create a basic fire detection and alert system. It triggers an LED or buzzer when critical temperature or gas levels are detected, making it useful for fire prevention, industrial safety, and smart home security.

---

## 🔧 Required Components

- Arduino board (e.g., Arduino Uno)  
- Temperature sensor (e.g., LM35 or similar)  
- Gas sensor (e.g., MQ-2, MQ-5, or MQ-7)  
- LED (for fire alert)  
- Buzzer (for gas alert)  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### 🌡️ Temperature Monitoring
- The **temperature sensor** reads the ambient temperature and outputs an analog voltage.
- Arduino reads this analog value (typically from **A1**) and converts it into Celsius.
- If the temperature is **≥ 80°C**, the **LED turns ON**, indicating a possible fire hazard.

### 💨 Gas Detection
- The **gas sensor** detects gases like LPG, methane, or smoke and provides an analog output based on concentration.
- If gas levels exceed a threshold (e.g., **100**, adjustable), the **buzzer is activated** to signal danger.

### 🖥️ Data Display & Alerts
- Both **temperature** and **gas levels** are printed to the **Serial Monitor** in real-time.
- The system runs continuously and updates alerts dynamically based on changing readings.

---

## 📚 Applications

- Fire detection and prevention  
- Industrial safety systems  
- Smart home security solutions  
- Air quality monitoring  

---

## 🏷️ Hashtags

#Arduino #FireAlarm #GasSensor #TemperatureSensor #SafetySystem #IoT #DIYProject #SmartHome #EmbeddedSystems #Tech
