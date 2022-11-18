 //use IC to control motor using arduino L293D(16pin);
void setup()
{ // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() 
{
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  delay(5000);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(5000);
  // put your main code here, to run repeatedly:

}

