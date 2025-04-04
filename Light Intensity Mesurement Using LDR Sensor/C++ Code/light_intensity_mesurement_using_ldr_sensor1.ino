// C++ code
//Owner : Saleh Sadid Mir
//CSE, KUET

/*Title: Light Intensity Mesurement  Using LDR Sensor*/

int sensorValue=0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  
}

void loop()
{
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  analogWrite(9, map(sensorValue, 0,1023,0, 255));
  delay(100);
              
}