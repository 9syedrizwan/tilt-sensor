// C++ code
//
int tilt=2;
int led=3;

void setup()
{
  pinMode(tilt,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  int v1=digitalRead(tilt);
  if(v1==0)
  {
  digitalWrite(led,HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  }
  else
  {
  digitalWrite(led,LOW);
  delay(100); // Wait for 1000 millisecond(s)
}
}