# 🎮 Interfacing Servo Motor with IR Remote and Arduino

This project demonstrates how to control a **servo motor** using an **IR remote** and an **Arduino**. By pressing different buttons on the remote, the servo rotates to specific angles (45°, 90°, 135°, or 180°), then automatically resets to 0°. The decoded IR signal values are also printed on the Serial Monitor for debugging.

---

## 🧰 Required Components
- Arduino board (e.g., **Uno**, **Mega**)
- **Servo motor** (e.g., SG90 or MG995)
- **IR remote control**
- **IR receiver module** (e.g., TSOP1738)
- **Jumper wires**

---

## ⚙️ How It Works

1. The **IR receiver** is connected to the Arduino and continuously listens for input from the remote.
2. When a **button** is pressed:
   - The signal is **decoded** using the `IRremote` library.
   - Based on the signal, the **servo motor rotates** to a specific angle:
     - `45°`, `90°`, `135°`, or `180°`.
3. After holding the position briefly, the **servo resets to 0°**.
4. The **IR signal code** is printed in the Serial Monitor for debugging purposes.

---

## 🔍 Working Principle

- **IRremote Library**: Used to decode the signals from the IR remote.
- **Servo Library**: Controls the servo's rotation.
- Key functions:
  - `IrReceiver.decode()` – Reads the remote signal.
  - `myservo.write(angle)` – Sets the servo’s position.
- The program uses `delay()` to pause before resetting the servo.

---

## 🧪 Sample Logic Flow
- 1. Wait for IR input
- 2. Decode signal
- 3. Match signal to pre-set angle
- 4. Move servo to that angle
- 5. Print signal to Serial Monitor
- 6. Delay briefly
- 7. Return servo to 0°

---
## 📦 Optional Enhancements

- Add multiple servos and map different remote buttons.
- Use an OLED display to show the current angle.
- Add EEPROM storage to remember the last servo position.

## 🖥️ Libraries Required
Make sure to install these via Library Manager in Arduino IDE:<br/>

- IRremote by shirriff
- Servo


---
#Arduino #ServoMotor #IRRemote #Robotics #Automation #EmbeddedSystems #Electronics #IoT #MotorControl #ArduinoProjects

