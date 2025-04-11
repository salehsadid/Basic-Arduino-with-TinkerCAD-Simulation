
# Controlling the Brightness of LED Using ATtiny85 💡

This project demonstrates how to control an LED's brightness using a **potentiometer** and **PWM output** on the compact **ATtiny85** microcontroller. It’s an excellent example of analog-to-digital interfacing, ideal for low-power or minimal hardware applications.

---

## 🔧 Required Components

- ATtiny85 microcontroller  
- LED  
- 220Ω resistor  
- Potentiometer  
- Breadboard  
- Jumper wires  
- USBasp programmer (or similar) for uploading code  

---

## 💡 How It Works

### 🎛️ Reading Potentiometer Value

- The **potentiometer** is connected to **analog pin A3 (PB3)** of the ATtiny85.
- It acts as a **voltage divider**, providing variable voltage as it's rotated.
- The ATtiny85 reads this analog input using `analogRead()`.

### 🔁 Analog to PWM Mapping

- The analog range **(0–1023)** is mapped to **PWM range (0–255)** using `map()`:
  
  ```cpp
  brightness = map(sensorValue, 0, 1023, 0, 255);
  ```

- This provides smooth control over LED brightness.

### 🔦 LED Brightness Control

- The mapped PWM value is sent to **digital pin 0 (PB0)** via `analogWrite()`.
- Higher potentiometer values result in **brighter LED output**.
- Lower values make the LED **dimmer**.

---

## ⚙️ Working Principle

This project illustrates:

- **Analog Input** (via potentiometer)
- **PWM Output** (via LED brightness)
- Use of `analogRead()`, `map()`, and `analogWrite()` on **ATtiny85**

It’s a fundamental example of using microcontrollers for variable output control — great for dimming LEDs, controlling fan/motor speeds, or audio volume control.

---

## 📦 Applications

- LED dimming circuits  
- Motor or fan speed control  
- Light-sensitive automation  
- Battery-operated devices using minimal components  
- Analog interface learning projects  

---

## 🏷️ Hashtags

#ATtiny85 #Arduino #LEDBrightness #PWM #PotentiometerControl #AnalogRead #Microcontroller #EmbeddedProjects #DIYElectronics #MinimalHardware #ArduinoProjects
```
