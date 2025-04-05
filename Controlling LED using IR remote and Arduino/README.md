# Controlling LED using IR Remote and Arduino

This project demonstrates how to control multiple LEDs using an IR remote and Arduino. Each button on the remote triggers a specific action, allowing wireless LED control. It’s a beginner-friendly introduction to IR communication and remote-controlled electronics, perfect for home automation projects.

---

## 🔧 Required Components

- Arduino board (e.g., Arduino Uno)  
- IR remote control  
- IR receiver module (e.g., TSOP1738)  
- LEDs (Blue, Orange, Green)  
- 220Ω resistors  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### 📶 Receiving Signals
- The **IR receiver** detects signals sent by the **IR remote**.
- Arduino decodes these IR signals into **unique numerical values** using an IR library.
- These values are compared to **predefined button codes**.

### 💡 LED Control Mechanism
Each button on the IR remote performs a specific function:

| Button | Action                  |
|--------|--------------------------|
| 1      | Turn **Blue LED** ON     |
| 2      | Turn **Blue LED** OFF    |
| 3      | Turn **Orange LED** ON   |
| 4      | Turn **Orange LED** OFF  |
| 5      | Turn **Green LED** ON    |
| 6      | Turn **Green LED** OFF   |

### 🔁 Functionality
- The Arduino **constantly listens** for incoming IR signals.
- Once a signal is received:
  - It is decoded.
  - The corresponding **LED is turned ON or OFF**.
- After processing, the system continues to listen for new commands.

---

## 📚 Applications

- Remote-controlled home lighting  
- IR-based appliance switching  
- Smart lighting prototypes  
- Educational IR communication demos  

---


## 🏷️ Hashtags

#Arduino #IRRemote #EmbeddedSystems #LEDControl #HomeAutomation #DIYProject #Electronics #IoT #Tech #Coding #Engineering
