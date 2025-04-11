
# Controlling RGB LED by PWM using Arduino

This project demonstrates how to control a Common Cathode RGB LED using **Pulse Width Modulation (PWM)** on an Arduino. It cycles through multiple colors by adjusting the intensity of the red, green, and blue components with `analogWrite()`. A great way to learn PWM and color mixing with Arduino!

---

## 🔧 Required Components

- Arduino board (e.g., Uno, Mega)  
- Common Cathode RGB LED  
- Resistors (220Ω or 330Ω × 3)  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### 🔌 Pin Setup

- Connect:
  - **Red** pin → Arduino **pin 11** (PWM)
  - **Green** pin → Arduino **pin 10** (PWM)
  - **Blue** pin → Arduino **pin 9** (PWM)
- Use resistors in series with each pin to prevent LED damage.
- The **common cathode** connects to **GND**.

### 🌈 PWM Control

- The `analogWrite()` function is used to apply PWM signals on the RGB pins.
- Various RGB combinations generate different colors:
  - `(255, 0, 0)` → Red  
  - `(0, 255, 0)` → Green  
  - `(0, 0, 255)` → Blue  
  - `(255, 255, 255)` → White  
  - `(0, 0, 0)` → LED Off

### ⏲️ Delay & Transition

- A **500ms delay** between color changes creates a smooth visual transition.

---

## ⚙️ Working Principle

- **PWM (Pulse Width Modulation)** simulates analog voltage levels using digital pins.
- Varying the **duty cycle** for each RGB channel controls color intensity.
- Combining red, green, and blue in different ratios produces a wide range of colors.

---

## 📚 Applications

- Decorative and ambient lighting systems  
- RGB visual indicators and effects  
- Learning platform for PWM and analog simulation  
- Color-based user interfaces and controls  

---

## 🏷️ Hashtags

#Arduino #RGBLED #PWM #EmbeddedSystems #DIY #LEDProjects #ColorControl #Electronics #IoT #ArduinoProjects
```
