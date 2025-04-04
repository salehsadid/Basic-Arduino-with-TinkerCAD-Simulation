// C++ code
/*Saleh Sadid Mir
CSE, KUET*/

/*TITLE: Traffic Light*/

int butt_state=0;
const int butt_pin = 2;
int Red=13;
int Yellow=12;
int Green=8;

void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(butt_pin, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  butt_state = digitalRead(butt_pin);
  if(butt_state==1){
    digitalWrite(Red,1);
    Serial.print("Stop\n");
    delay(2000);
    digitalWrite(Red,0);
    delay(500);
    
    digitalWrite(Yellow,1);
    Serial.print("Get Ready\n");
    delay(2000);
    digitalWrite(Yellow,0);
    delay(500);
    
    digitalWrite(Green,1);
    Serial.print("Bye\n");
    delay(2000);
    digitalWrite(Green,0);
    delay(500);
    
  }
    
  }