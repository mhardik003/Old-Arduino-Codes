/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;
Servo myservo4;// twelve servo objects can be created on most boards
char value;
int pos = 0;    // variable to store the servo position

void setup()
{
  Serial.begin(9600);
  myservo1.attach(8);// attaches the servo on pin 9 to the servo object
  myservo2.attach(9);// attaches the servo on pin 9 to the servo object
  myservo3.attach(10);// attaches the servo on pin 9 to the servo object
  myservo4.attach(11);// attaches the servo on pin 9 to the servo object
}

void loop() 
{
   if(Serial.available()>0)
    {
         value=Serial.read();
    
          Serial.println(value);
          if(value=='1')
       {  
        for (pos = 0; pos <= 180; pos += 1) 
        { // goes from 0 degrees to 180 degrees
           // in steps of 1 degree
          Serial.println(pos);
            myservo4.write(pos);              // tell servo to go to position in variable 'pos'
            delay(05);                       // waits 15ms for the servo to reach the position
        }
        for (pos = 180; pos >= 0; pos -= 1)
         { // goes from 180 degrees to 0 degrees
          myservo4.write(pos);              // tell servo to go to position in variable 'pos'
          delay(05);                       // waits 15ms for the servo to reach the position
          Serial.println(pos);
          }
       }

        if(value=='2') 
     {
       for (pos = 0; pos <= 180; pos += 1) 
         { // goes from 0 degrees to 180 degrees
           // in steps of 1 degree
           myservo1.write(pos);              // tell servo to go to position in variable 'pos'
           delay(05);                       // waits 15ms for the servo to reach the position
         }
       for (pos = 180; pos >= 0; pos -= 1)
         { // goes from 180 degrees to 0 degrees
            myservo1.write(pos);              // tell servo to go to position in variable 'pos'
            delay(05);                       // waits 15ms for the servo to reach the position
         }
     }


       if(value=='3')
       { 
       for (pos = 0; pos <= 180; pos += 1) 
        { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
          myservo2.write(pos);              // tell servo to go to position in variable 'pos'
         delay(05);                       // waits 15ms for the servo to reach the position
        }
      for (pos = 180; pos >= 0; pos -= 1)
        { // goes from 180 degrees to 0 degrees
          myservo2.write(pos);              // tell servo to go to position in variable 'pos'
          delay(05);    
         // waits 15ms for the servo to reach the position
       }
       }
       if(value=='4')
       {
       for (pos = 0; pos <= 180; pos += 1) 
       { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
            myservo3.write(pos);              // tell servo to go to position in variable 'pos'
           delay(05);                       // waits 15ms for the servo to reach the position
       }
      for (pos = 180; pos >= 0; pos -= 1)
       { // goes from 180 degrees to 0 degrees
           myservo3.write(pos);              // tell servo to go to position in variable 'pos'
          delay(05);                       // waits 15ms for the servo to reach the position
       }
      }
    }
}


