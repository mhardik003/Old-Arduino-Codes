  int value = 0;
   //const int threshold=200;
  void setup() 
  {
    // put your setup code here, to run once:
     Serial.begin(9600);
     pinMode(A5,INPUT);
     pinMode(13,OUTPUT);
 
  }
  void loop()
  {
    // put your main code here, to run repeatedly:
    
    
      value = analogRead(A5);
      if(value<=500)
      digitalWrite(13,HIGH);
      else
      digitalWrite(13,LOW);
      Serial.println(value);
      delay(100);
  }

