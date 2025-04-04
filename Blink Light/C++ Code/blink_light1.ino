// C++ code
//

int LED = 8
void setup()// only once
{
  pinMode(LED, OUTPUT);
}

void loop()// infinite
{
  digitalWrite(LED, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(LED, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}