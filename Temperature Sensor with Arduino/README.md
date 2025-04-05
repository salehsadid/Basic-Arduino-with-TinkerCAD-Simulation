
# Temperature Sensor with Arduino

This project demonstrates how to measure ambient temperature using the LM35 analog temperature sensor and Arduino. It calculates and displays temperature readings in both Celsius and Fahrenheit in real time via the Serial Monitor. A great project for beginners exploring sensors, analog input, and data conversion.

---

## 🔧 Required Components

- Arduino board (e.g., Arduino Uno)  
- Analog temperature sensor (e.g., LM35)  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### 🌡️ Analog Temperature Reading
- The **LM35 sensor** outputs an analog voltage proportional to the temperature.
- Arduino reads this analog voltage through **analog pin A0**.

### 🔁 Voltage to Temperature Conversion

- **Analog to Voltage Conversion**  
  The analog value (0–1023) is converted to voltage (0–5V) using:
  ```
  Voltage = (AnalogReading × 5.0) / 1024.0
  ```

- **Celsius Conversion**  
  LM35 outputs 10mV per °C. Temperature in Celsius is calculated as:
  ```
  TempC = Voltage × 100
  ```

- **Fahrenheit Conversion**
  ```
  TempF = (TempC × 9.0 / 5.0) + 32
  ```

### 🖥️ Displaying Results
- The temperature values in both **Celsius** and **Fahrenheit** are printed to the **Serial Monitor**.
- Readings are updated every **3 seconds** using `delay(3000)`.

---

## 📚 Applications

- Environmental monitoring  
- Home automation systems  
- Weather stations  
- Educational sensor interfacing  

---

## 🏷️ Hashtags

#Arduino #TemperatureSensor #EmbeddedSystems #LM35 #IoT #DIYProject #Electronics #Tech #Coding #Engineering
```
