/* C++ code
Saleh Sadid Mir
CSE, KUET */
  
/*Title: Capacitance Meter Using Arduino*/

//initial pins
int analogPin= 0;
int chargePin=8;
int dischargePin= 9;

//inital resistor
int resistorValue=1000;

//initial timer
unsigned long startTime;
unsigned long elapsedTime;

//initial capacitance variables
float microFarads;
float nanoFarads;

void setup()
{
  pinMode(chargePin, OUTPUT);
  digitalWrite(chargePin, LOW);
  Serial.begin(9600);
  
}

void loop()
{
  digitalWrite(chargePin, HIGH);
  startTime = millis();
  while(analogRead(analogPin)<610){
    //does nothing
  }
  unsigned long nowTime=millis();
  elapsedTime = nowTime - startTime;
  microFarads= ((float)elapsedTime/ resistorValue)*1000;
  Serial.print(elapsedTime);
  Serial.println("mS");
  
  if(microFarads>1){
    Serial.print((long)microFarads);
    Serial.println(" microFarads");
  }
  else{
    nanoFarads= microFarads * 1000.0;
    Serial.print((long)nanoFarads);
    Serial.println(" nanoFarads");
    delay(500);
  }
  
  digitalWrite(chargePin, LOW);
  pinMode(dischargePin,OUTPUT);
  digitalWrite(dischargePin, LOW);
  while(analogPin>0){
    //do nothing
  }
  pinMode(dischargePin,INPUT);
                    
}