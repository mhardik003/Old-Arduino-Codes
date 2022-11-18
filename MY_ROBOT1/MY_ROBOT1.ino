#include <AFMotor.h>
char value;
AF_DCMotor motor1(1) ;
AF_DCMotor motor2(2) ;
AF_DCMotor motor3(3) ;
AF_DCMotor motor4(4) ;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
    motor1.setSpeed(255);
    motor2.setSpeed(255);
    motor3.setSpeed(255);
    motor4.setSpeed(255);
    pinMode(10,OUTPUT);

}

void loop() {
      digitalWrite(10,HIGH);
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
           {
                value=Serial.read();
    
                Serial.println(value);
                   if(value=='1')//FRONTT
                        {motor1.run(FORWARD);
                         delay(50);
                         motor2.run(FORWARD);
                         delay(50);   
                         motor3.run(FORWARD);
                         delay(50);
                         motor4.run(BACKWARD);
                         delay(50);
                        }
                 else if(value=='2')//BACK
                        {motor1.run(BACKWARD);
                         delay(50);
                         motor2.run(BACKWARD);
                         delay(50);   
                         motor3.run(FORWARD);
                         delay(50);
                         motor4.run(BACKWARD);
                         delay(50);
                        }
                 else if(value=='3')//RIGHT
                        {motor1.run(BACKWARD);
                         delay(50);
                         motor2.run(BACKWARD);
                         delay(50);   
                         motor3.run(FORWARD);
                         delay(50);
                         motor4.run(FORWARD);
                         delay(50);
                        }//LEFT
                  else if(value=='4')
                        {motor1.run(FORWARD);
                         delay(50);
                         motor2.run(FORWARD);
                         delay(50);   
                         motor3.run(BACKWARD);
                         delay(50);
                         motor4.run(BACKWARD);
                         delay(50);
                        }
                      else if(value=='5')
                      {
                        motor1.run(RELEASE);
                       delay(50);
                       motor2.run(RELEASE);
                       delay(50);
                       motor3.run(RELEASE);
                       delay(50);
                       motor4.run(RELEASE);
                       delay(50);
                      }
                      
                       else if(value=='6')
                      {
                        motor1.run(RELEASE);
                       delay(50);
                       motor2.run(RELEASE);
                       delay(50);
                       motor3.run(RELEASE);
                       delay(50);
                       motor4.run(RELEASE);
                       delay(50);
                      }
                      }
                      }
                        
