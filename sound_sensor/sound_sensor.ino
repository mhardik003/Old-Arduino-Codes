  int value = 0;
  void setup() 
  {
    // put your setup code here, to run once:
   pinMode(A4,INPUT);
     Serial.begin(9600);
  }
  void loop()
  {
    // put your main code here, to run repeatedly:
      value = analogRead(A4);
      Serial.println(value);
      delay(2000);
  }

