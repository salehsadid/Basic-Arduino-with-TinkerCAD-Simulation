# Digital Thermometer Using Arduino and LCD

This project demonstrates how to build a **digital thermometer** using an LM35 temperature sensor and a 16x2 LCD display. The system reads real-time temperature data, converts it into Fahrenheit, and displays it on the LCD. Perfect for learning sensor interfacing, analog-to-digital conversion, and display control with Arduino.

---

## 🔧 Required Components

- Arduino Uno (or compatible board)  
- LM35 Temperature Sensor (or similar analog sensor)  
- 16x2 LCD Display (HD44780 controller)  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### 🌡️ Sensor Reading

- The **LM35** outputs an analog voltage proportional to the temperature (10mV/°C).
- Arduino reads this signal via the **A0 analog pin** using `analogRead()`.

### 🔢 Conversion Logic

- Analog value (0–1023) is converted to voltage (0–5V).
- Temperature in Celsius:  
  `Temperature (°C) = Voltage × 100`
- Temperature in Fahrenheit:  
  `Temperature (°F) = (Temperature (°C) × 9/5) + 32`

### 🖥️ LCD Display

- Uses the **LiquidCrystal** library to interface with the 16x2 LCD.
- Displays a welcome message at startup.
- Continuously updates the second line with live temperature in **°F**.
- Displays the degree symbol using `(char)178`.

---

## ⚙️ Working Principle

- The **LM35 sensor** outputs 0.01V per °C.
- The Arduino reads and processes this data in real-time.
- The result is formatted and displayed clearly on the LCD.
- Demonstrates practical embedded programming and analog data handling.

---

## 📚 Applications

- Digital room or ambient thermometer  
- Smart home automation systems  
- Greenhouse or lab monitoring  
- Embedded systems learning and testing  

---

## 🏷️ Hashtags

#Arduino #DigitalThermometer #LCDDisplay #LM35 #DIYElectronics #TemperatureSensor #IoT #EmbeddedSystems #ArduinoProjects #RealTimeMonitoring
