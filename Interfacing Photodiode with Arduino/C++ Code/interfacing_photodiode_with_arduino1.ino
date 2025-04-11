// C++ code
//Author: Saleh Sadid Mir
/* Title: Interfacing Photodiode with Arduino*/
int sensorPin = A0;
int sensorValue = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop()
{
  sensorValue= analogRead(sensorPin);
  Serial.println(sensorValue);
}
