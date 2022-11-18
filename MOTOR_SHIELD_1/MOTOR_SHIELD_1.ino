#include <AFMotor.h>

AF_DCMotor motor1(1) ;
AF_DCMotor motor3(3) ;
  // put your setup code here, to run once:


void setup()
{
  motor1.setSpeed(255);
  motor3.setSpeed(255);
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.run(BACKWARD);delay(2000);
motor1.run(RELEASE);delay(1000);
motor1.run(FORWARD);delay(2000);
motor1.run(RELEASE);delay(1000);
motor3.run(BACKWARD);delay(2000);
motor3.run(RELEASE);delay(1000);
motor3.run(FORWARD);delay(2000);
motor3.run(RELEASE);delay(1000);
motor1.run(BACKWARD);
motor3.run(FORWARD);delay(2000);
motor1.run(RELEASE);delay(1000);
motor3.run(RELEASE);delay(1000);
motor3.run(BACKWARD);
motor1.run(FORWARD);delay(2000);
motor3.run(RELEASE);delay(1000);
motor1.run(RELEASE);delay(1000);


}
