
# Blinking Light using Arduino

This is the most basic and classic Arduino project—**blinking an LED** on and off at regular intervals. It’s often the first program written by beginners to get started with microcontrollers and embedded systems.

---

## 🔧 Required Components

- Arduino board (e.g., Arduino Uno)  
- LED (any color)  
- 220Ω resistor  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### ⚙️ Circuit Setup
- The **LED’s anode (+)** connects to a **digital pin** (e.g., pin 8) on the Arduino through a **220Ω resistor**.
- The **cathode (–)** is connected to the **GND** of the Arduino.

### 🔁 Program Logic
- The Arduino turns the LED **ON** by setting the pin **HIGH**.
- After a short delay (e.g., 1000 ms), it turns the LED **OFF** by setting the pin **LOW**.
- This cycle **repeats continuously**, creating a blinking effect.

```cpp
// Basic Blink Code

int LED = 8
void setup()// only once
{
  pinMode(LED, OUTPUT);
}

void loop()// infinite
{
  digitalWrite(LED, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(LED, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
```

---

## 📚 Applications

- Beginner learning and testing Arduino  
- LED signaling systems  
- Visual feedback for digital pins  
- Foundation for more complex timing-based projects  

---

## 🏷️ Hashtags

#Arduino #BlinkingLED #EmbeddedSystems #Electronics #DIYProject #IoT #GettingStarted #Tech #Coding #Engineering
```
