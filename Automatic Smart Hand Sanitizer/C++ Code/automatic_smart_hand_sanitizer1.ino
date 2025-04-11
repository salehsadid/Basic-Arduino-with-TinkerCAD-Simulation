// C++ code
//Author: Saleh Sadid Mir 
/* Title: Automatic Smart Hand  Sanitizer*/
#include <Servo.h>
Servo myservo;
#define trigPin 2
#define echoPin 3

float duration, distance;


void setup()
{
  myservo.attach(9);
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, OUTPUT);
  
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  
  duration= pulseIn(echoPin,HIGH);
  distance= (duration/2)*0.0349;
  
  Serial.print("Distance: ");
  if(distance >=2 || distance<=4){
    Serial.println("Out of range");
    myservo.detach();
  }
  else{
    myservo.attach(9);
    myservo.write(0);
    delay(1000);
    myservo.write(90);
    delay(1000);
    myservo.write(180);
    delay(1000);
    myservo.write(90);
  
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
    
  }
  delay(500);
  myservo.detach();
}

  
