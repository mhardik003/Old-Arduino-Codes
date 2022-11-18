  int value = 0;
    int value1 = 0;
  void setup() 
  {
    // put your setup code here, to run once:
   pinMode(A4,INPUT);
   pinMode(3,INPUT);
     Serial.begin(9600);
  }
  void loop()
  {
    // put your main code here, to run repeatedly:
      value1=digitalRead(3);
      value = analogRead(A4);
      Serial.println("ANLOG="+value);
       Serial.println("DDIGITAL="+value1);
      delay(2000);
  }

