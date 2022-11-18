int button=0;
void setup() 
{
  // put your setup code here, to run once:
pinMode(5,INPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(5));
   button = digitalRead(5);
   if(button==LOW)
   {
    digitalWrite(8,LOW);
     delay(100);
   }
   else
   {
      digitalWrite(8,HIGH);
      delay(100);  
   } 
}
