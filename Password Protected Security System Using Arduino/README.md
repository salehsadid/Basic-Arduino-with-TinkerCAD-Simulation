# Password Protected Security System Using Arduino

This project implements a basic yet effective password-protected security system using an Arduino, a 4x4 keypad, and visual/audio indicators. It's a great introduction to access control systems and user authentication in embedded applications.

---

## 🔧 Required Components

- Arduino board (e.g., Arduino Uno)  
- 4x4 Keypad  
- Red LED (Access Denied Indicator)  
- Green LED (Access Granted Indicator)  
- Piezo Buzzer (for beeps and unlock sound)  
- Breadboard  
- Jumper wires  

---

## 💡 How It Works

### 🔢 User Input via Keypad
- A **five-digit password** is entered using the **4x4 keypad**.
- Each keypress triggers a short **beep sound** for feedback via the buzzer.

### ✅ Password Verification
- If the entered password **matches the predefined password** (e.g., `12345`):
  - The **green LED** lights up.
  - A melodic **unlocking tone** plays through the buzzer.
- If the password **does not match**:
  - The **red LED** stays ON.
  - A **loud buzzer alert** signals unauthorized access.

### 🔁 Reset & Retry
- After each verification attempt (successful or not), the system **resets** and waits for a new input.
- The system **continuously monitors** keypad inputs and handles logic accordingly.

---

## 📚 Applications

- Electronic door locks  
- Basic access control systems  
- DIY home or lab security  
- Entry authentication for cabinets or lockers  

---

## 🏷️ Hashtags

#Arduino #SecuritySystem #PasswordProtected #KeypadLock #IoT #EmbeddedSystems #DIYProject #Tech #Electronics #Engineering
