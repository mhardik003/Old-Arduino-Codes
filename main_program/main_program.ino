  long duration, distanceCm;
   #include <AFMotor.h>// to import motor shield library
   #define trigPin 9
   # define echoPin 11
   
       AF_DCMotor motor3(3) ;
      AF_DCMotor motor4(4) ;
      // put your setup code here, to run once:

   void setup()
  {
       pinMode(trigPin, OUTPUT);// set the trig pin to output
       pinMode(echoPin, INPUT);// set the echo pin to input
       motor3.setSpeed(255);
       motor4.setSpeed(255);
  }

   void loop(){
    
    
    // put your main code here, to run repeatedly:
       digitalWrite(trigPin, LOW);
       delayMicroseconds(2);// delays are reuired for a successful sensor operation
       digitalWrite(trigPin, HIGH);
       delayMicroseconds(10);//this delay is reuired as weell!!
       digitalWrite(trigPin, LOW);
       duration = pulseIn(echoPin, HIGH);
       distanceCm= (duration/2)/29.1;
       
         if(distanceCm<40);
      {

         // motor2.run(RELEASE); 
         // delay(1000);      
          motor3.run(FORWARD);
            delayMicroseconds(10);  
      }
      
        if(distanceCm>=40)
     {
      
           motor3.run(BACKWARD);delay(250);
     //motor1.run(RELEASE);delay(1000);
       motor4.run(FORWARD);delay(500);
     }
   }

