// C++ code
//Author: Saleh Sadid Mir
// CSE, KUET

/*PIR sensor with Arduino*/
#define pir 13
bool pir_val = 0;
#define led 12


void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
  
}

void loop()
{
  pir_val= digitalRead(pir);
  if(pir_val== HIGH){
    Serial.println("Motion Detected");
    digitalWrite(led, HIGH);
  }
  else{
        digitalWrite(led, LOW);       
  }
                    
}