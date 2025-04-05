//Owner 
//Saleh Sadid Mir
//CSE , KUET 

/*Title : Interfacing Ultrasonic Sensor with Arduino */


int trigpin =10;
int echopin=9;
long time;
int distance;

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(10, LOW);
  delayMicroseconds(2); 
  
  digitalWrite(10, HIGH);
  delayMicroseconds(10); 
  digitalWrite(10, LOW);
  
  // distance calculation
  time= pulseIn(9, HIGH);
  distance= time*0.034/2; //0.034 is the speed of the sound in air 
  // we divided by 2 cause the wave is traversing the path twice
  
  //printing the distance in serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}