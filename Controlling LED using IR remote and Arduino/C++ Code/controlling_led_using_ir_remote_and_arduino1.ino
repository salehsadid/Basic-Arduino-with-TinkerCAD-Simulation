// C++ code
//Owner: Saleh Sadid Mir
// CSE, KUET

/*Title: Controlling LED using IR remote and Arduino*/

#include<IRremote.h>
int IR_recieve= 12;
int blue=9;
int orange=10;
int green = 11;


           
void setup()
{
  Serial.begin(9600);
   // starts the reciever
  IrReceiver.begin(IR_recieve);
  pinMode(blue, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
  
  
}

void loop()
{
  if(IrReceiver.decode()){
  	long int decCode = IrReceiver.decodedIRData.decodedRawData;
    Serial.println(decCode);
   
    switch(decCode){
      case -284115200: // when button 1 of IR remote is pressed
        digitalWrite(blue, HIGH);
        break;
      case -300826880: // when button 2 of IR remote is pressed
        digitalWrite(blue, LOW);
        break;
      case -317538560: // when button 3 of IR remote is pressed
        digitalWrite(orange, HIGH);
        break;
      case -350961920: // when button 4 of IR remote is pressed
        digitalWrite(orange, LOW);
        break;
      case -367673600: // when button 5 of IR remote is pressed
        digitalWrite(green, HIGH);
        break;
      case -384385280: // when button 6 of IR remote is pressed
        digitalWrite(green, LOW);
        break;
     
      
      default:
        break;
    }
    
      
    
    IrReceiver.resume(); //continues recieving the next value
      
  }
  delay(10);
}