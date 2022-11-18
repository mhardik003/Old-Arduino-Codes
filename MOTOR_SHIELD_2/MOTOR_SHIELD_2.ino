#include <AFMotor.h>

AF_DCMotor motor1(1) ;
AF_DCMotor motor2(2) ;
AF_DCMotor motor3(3) ;
AF_DCMotor motor4(4) ;
  // put your setup code here, to run once:


void setup()
{
    motor1.setSpeed(255);
    motor2.setSpeed(255);
    motor3.setSpeed(255);
    motor4.setSpeed(255);
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.run(BACKWARD);delay(2000);
motor1.run(RELEASE);delay(1000);
motor2.run(BACKWARD);delay(2000);
motor2.run(RELEASE);delay(1000);
motor3.run(BACKWARD);delay(2000);
motor3.run(RELEASE);delay(1000);
motor4.run(BACKWARD);delay(2000);
motor4.run(RELEASE);delay(1000);


}
