char value;
#include <AFMotor.h>
AF_DCMotor motor1(1) ;
AF_DCMotor motor2(2) ;
void setup()
{
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  pinMode(7,OUTPUT);//motor1 forward LEFT
  pinMode(11,OUTPUT);//motor1 backward LEFT
  pinMode(9,OUTPUT);//motor2 forwards RIGHT
  pinMode(10,OUTPUT);//motor2 backwards RIGHT
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  
  if(Serial.available()>0)
  {
    value=Serial.read();
    
    Serial.println(value);
    if(value=='1')//forward
      {
        digitalWrite(7,HIGH);//POSITIVE TO POSITIVE
        digitalWrite(9,HIGH);//NEGATIVE TO NEGATIVE
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        delay(100);
        motor1.run(FORWARD);//delay(2000);
        motor2.run(FORWARD);
      }
    if(value=='2')//BACKWARD
      {
        digitalWrite(7,LOW);//POSITIVE TO POSITIVE
        digitalWrite(9,LOW);//NEGATIVE TO NEGATIVE
        digitalWrite(11,HIGH);
        digitalWrite(10,HIGH);
        delay(100);
        motor1.run(BACKWARD);//delay(2000);
        motor2.run(BACKWARD);
      }
    if(value=='3')//RIGHT
      {
        digitalWrite(7,HIGH);//POSITIVE TO POSITIVE
        digitalWrite(9,LOW);//NEGATIVE TO NEGATIVE
        digitalWrite(11,LOW);
        digitalWrite(10,HIGH);
        delay(100);
        motor1.run(FORWARD);//delay(2000);
        motor2.run(BACKWARD);
        }
    if(value=='4')//LEFT
      {
        digitalWrite(7,LOW);//POSITIVE TO POSITIVE
        digitalWrite(9,HIGH);//NEGATIVE TO NEGATIVE
        digitalWrite(11,HIGH);
        digitalWrite(10,LOW);
        delay(100);
        motor1.run(BACKWARD);//delay(2000);
        motor2.run(FORWARD);
        }
       if(value=='5')//LIGHTS
      {
        digitalWrite(7,LOW);//POSITIVE TO POSITIVE
        digitalWrite(9,LOW);//NEGATIVE TO NEGATIVE
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        delay(100);
        motor1.run(RELEASE);//delay(2000);
        motor2.run(RELEASE);    }
    if(value=='6')//HONK!!
      {
        digitalWrite(7,LOW);//POSITIVE TO POSITIVE
        digitalWrite(9,LOW);//NEGATIVE TO NEGATIVE
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        delay(100);
        motor1.run(RELEASE);//delay(2000);
        motor2.run(RELEASE);}    
  }
  }
   


