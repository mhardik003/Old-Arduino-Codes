char value;
void setup()
{
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  
  if(Serial.available()>0)
  {
    value=Serial.read();
    
    Serial.println(value);
    if(value=='1')
      {digitalWrite(7,HIGH);
      }
    if(value=='2')
      {digitalWrite(8,HIGH);
      }
    if(value=='3')
      {digitalWrite(9,HIGH);
      }
    if(value=='4')
      {digitalWrite(10,HIGH);
      }
       if(value=='5')
      {digitalWrite(7,LOW);
      }
    if(value=='6')
      {digitalWrite(8,LOW);
      }
    if(value=='7')
      {digitalWrite(9,LOW);
      }
    if(value=='8')
      {digitalWrite(10,LOW);
      }
      
      
  }
  }
   


