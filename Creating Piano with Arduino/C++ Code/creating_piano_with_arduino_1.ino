/* Saleh Sadid Mir
   CSE, KUET */

/* TITLE: Creating Piano with Arduino */

const int buttonPins[] = {2, 3, 4, 5, 6, 7, 8, 9};  // Array for button pins
const int tones[] ={262, 294, 330, 349, 392, 440, 494, 523}; // Corresponding freq

const int piezo = 13;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(buttonPins[i], INPUT);
  }
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    if (digitalRead(buttonPins[i]) == HIGH) {
      Serial.print("Button Pressed: ");
      Serial.println(i + 1);
      tone(piezo, tones[i], 100);
      delay(100); // Small delay to avoid bouncing
      break; // Stop checking other buttons
    }
  }
}
