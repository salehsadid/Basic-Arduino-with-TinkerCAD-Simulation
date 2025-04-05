// C++ code
/*Saleh Sadid Mir
CSE, KUET*/

/*TITLE: Interfacing Servo Motor  with IR remote and Arduino*/

#include<IRremote.h>
#include<Servo.h>

int recievePin =5;

Servo myservo;
int pos= 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Enabling ITin");
  IrReceiver.begin(recievePin);
  Serial.println("Eabled IRin");
  myservo.attach(3);
  myservo.write(pos);
  
}

void loop()
{
  if(IrReceiver.decode()){
    long int signal_data=IrReceiver.decodedIRData.decodedRawData;
    Serial.println(signal_data);
    
    if(signal_data== -284115200){
      myservo.write(45);
      delay(1000);
    }
    else if(signal_data== -300826880){
      myservo.write(90);
      delay(1000);
    }
    else if(signal_data== -317538560){
      myservo.write(135);
      delay(2000);
    }
    else if(signal_data== -350961920){
      myservo.write(180);
      delay(2000);
    }
    else {
      
    }
    myservo.write(0);
    IrReceiver.resume();
    delay(100);
    
    
  }
}