// C++ code
//Owner : Saleh Sadid Mir
//CSE, KUET

/*Title:Temperature Sensor with Arduino*/

int tmp=A0;

float volt;
float analog_reading;
float temp_fahrenheit;
float temp_celcius;         

void setup()
{
  pinMode(A0, INPUT); 
  Serial.begin(9600);
  
}

void loop()
{
  analog_reading= analogRead(A0);
  Serial.print("\n\nAnalog readindg: "); //printing the analog input from a0 pin
  Serial.println(analog_reading);
  
  
  //conversion of analog reading to voltage 
  volt= analog_reading*5/1024; 
  // here , the analog reading range is from 0 to 1024 
  // so we divided the reading by 1024 and multiplied by 5 so that the equivalent volt is gained ranging from 0 to 5 vol
  
  Serial.print("Voltage readindg: "); //printing the calculated voltage
  Serial.println(volt);
  
  
  //reading in celcius 
  //10mv change in sensor per degree celcius change with 0.5V offset  
  temp_celcius= 100*(volt-0.5);
  
  Serial.print("Celcius readindg: "+String(temp_celcius)+ ("C")); //printing the calculated celcius temp
  
  //reading in fahrenheit
  //using C to F formula
  temp_fahrenheit= (temp_celcius*9/5)+32;
  
  Serial.print("\nFahrenheit readindg: "+String(temp_fahrenheit)+ ("F")); //printing the calculated celcius temp
  delay(3000);
  
  
}