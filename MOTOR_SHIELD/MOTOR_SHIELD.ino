AF_DCMotor motor1(1);void setup() {
  // put your setup code here, to run once:

}
void setup()
{
  motor1.setSpeed(225)
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.run(FORWARD);
}
