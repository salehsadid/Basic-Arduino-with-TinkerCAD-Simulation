// C++ code
//Author: Saleh Sadid Mir
// CSE, KUET
/* Title: Thermometer using ATtiny85*/
int pb0=0;
#define pb2 A1
double realdegree;

void setup()
{
  pinMode(pb0, OUTPUT);
  realdegree=0.0;
  
}

void loop()
{
  int degree;
  degree= analogRead(pb2);
  realdegree = (double) degree /1024;
  realdegree*=5;
  realdegree-= 0.5;
  realdegree*=100;
  realdegree= (9.0/5)*(realdegree )+32;
  
  if(realdegree>=70 && realdegree<= 116){
    digitalWrite(pb0,HIGH);
    delay(500);
    digitalWrite(pb0,LOW);
    delay(500);
  }
  else if(realdegree>=-40 && realdegree<= 68){
    digitalWrite(pb0,HIGH);
    delay(1000);
    digitalWrite(pb0,LOW);
    delay(1000);
  }
  else if(realdegree>=123 && realdegree<= 238){
    digitalWrite(pb0,HIGH);
    delay(100);
    digitalWrite(pb0,LOW);
    delay(100);
  }
  else {
    digitalWrite(pb0, HIGH);
  }
    
}