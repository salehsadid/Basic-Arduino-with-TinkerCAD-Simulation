// C++ code
//Author: SALEH SADID MIR
// CSE, KUET

/*Title: Controlling RGB LED by PWM*/

int red=11;
int green=10;
int blue=9;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop()
{
 color(255,0,0); //Red
  delay(500);
  
  color(0,255,0); //Green
  delay(500);
  
  color(0,0,255); //Blue
  delay(500);
  
  color(255,255,255); //White
  delay(500);
  
  color(0,0,0); //Off
  delay(500);
  
}

void color(unsigned char r, unsigned char g, unsigned char b){
  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);
}