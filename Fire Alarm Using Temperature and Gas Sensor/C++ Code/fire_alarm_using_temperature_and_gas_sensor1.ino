//Owner : Saleh Sadid Mir
// CSE, KUET

/*Title: Fire Alarm Using Temperature and Gas Sensor*/

float temp;
float vout;//output of the temp sensor
float vout1;// if temp inc a new voltage will be produced
int LED = 13;
int gassensor;
int buzzer=7;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  vout= analogRead(A1);
  vout1=( vout/1023)*5000;
  temp= (vout1-500)/10;
  gassensor= analogRead(A0);
  
  if(temp>=80){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
  
  if(gassensor>=100){
    digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
  }
  
  //printing in serial monitor
  Serial.print("In Degree:");
  Serial.print(" ");
  Serial.print(temp);
  
  Serial.print("\t");
  
  Serial.print("Gas Sensor:");
  Serial.print(" ");
  Serial.print(gassensor);
  Serial.println();
  delay(1000);
   
}