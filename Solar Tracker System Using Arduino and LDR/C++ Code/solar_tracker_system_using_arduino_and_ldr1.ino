// C++ code
//Author: Saleh Sadid Mir
/*title: Solar Tracker System Using Arduino and LDR*/

#include<Servo.h>
Servo horizontal;
int servoh=180;
int servohLimitHigh=175;
int servohLimitLow=5;

Servo vertical;
int servov=45;
int servovLimitHigh=60;
int servovLimitLow=1;

int ldr_uplt=A0;
int ldr_uprt=A2;
int ldr_downlt=A1;
int ldr_downrt=A3;

void setup()
{
  horizontal.attach(9);
  vertical.attach(10);
  horizontal.write(180);
  vertical.write(45);
  delay(2500);
                       
}

void loop()
{
  int uplt= analogRead(ldr_uplt);
  int uprt= analogRead(ldr_uprt);
  int downlt= analogRead(ldr_downlt);
  int downrt= analogRead(ldr_downrt);
  
  int dtime=10;
  int tol=90;
  int avt= (uplt+uprt);
  int avd= (downlt+downrt);
  int avl= (uplt+downlt);
  int avr= (uprt+downrt);
  int dvert = avt -avd;
  int dhoriz= avl-avr;
  
  if(-1*tol>dvert || dvert>tol){
    if(avt>avd){
      servov= ++servov;
      if(servov>servovLimitHigh){
        servov= servovLimitHigh;
      }
    }
    else if(avt <avd){
      servov= --servov;
      if(servov>servovLimitLow){
        servov= servovLimitLow;
      }
    }
      vertical.write(servov);
  }
  
  if(-1*tol>dhoriz || dhoriz>tol){
    if(avl>avr){
      servoh= --servoh;
      if(servoh>servohLimitLow){
        servoh= servohLimitLow;
      }
    }
    else if(avl <avr){
      servoh= ++servoh;
      if(servoh>servohLimitHigh){
        servoh= servohLimitHigh;
      }
    }
    else if(avl==avr){
      delay(5000);
    }
      horizontal.write(servoh);
  }
  
  delay(dtime);
  
  
  
}