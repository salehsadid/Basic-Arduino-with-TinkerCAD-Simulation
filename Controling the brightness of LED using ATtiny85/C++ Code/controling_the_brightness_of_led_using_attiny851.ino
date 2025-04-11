// C++ code
//Author: Saleh Sadid Mir

/*title: Controling the brightness of LED using ATtiny85*/
int pot_val=0;
int led= 0;
int sensorpin=A3;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensorpin, INPUT);
  
}

void loop()
{
  pot_val= analogRead(sensorpin);
  pot_val= map(pot_val, 0,1023,0,255);
  analogWrite (led, pot_val);
}
