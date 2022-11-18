  int value = 0;
  void setup() 
  {
    // put your setup code here, to run once:
   pinMode(A4,INPUT);
     Serial.begin(9600);
     pinMode(8,OUTPUT);
      pinMode(9,OUTPUT);
       pinMode(10,OUTPUT);
        pinMode(11,OUTPUT);
  }

  void loop() 
  {
      // put your main code here, to run repeatedly:
      value = analogRead(A4);
      Serial.println(value);
      delay(10);
      if(value>=550)
      {
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
      }
      else if(value>=400)
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
      } 
      else if(value>=300)
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
      }
      else if(value>=200)
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
      }
     else
     {  
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(11,HIGH);
     }
     }  

