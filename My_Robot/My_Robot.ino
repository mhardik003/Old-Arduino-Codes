#include<SoftwareSerial.h>
#include <AFMotor.h>
char value;
int read_count=0;
char data_temp, RFID_data[12];
char Saved_Tags[3][12]={
                       {'0','9','0','0','6','4','B','8','D','F','0','A'},
                       {'4','D','0','0','3','2','B','3','A','E','6','2'}};//090064B8DF0A
boolean tag_check,tag_status,entry_control;

AF_DCMotor motor1(1) ;
AF_DCMotor motor2(2) ;
AF_DCMotor motor3(3) ;
AF_DCMotor motor4(4) ;

SoftwareSerial mySerial(0,10);

void setup()
{// put your setup code here, to run once:
    mySerial.begin(9600);
    Serial.begin(9600);
    motor1.setSpeed(255);
    motor2.setSpeed(255);
    motor3.setSpeed(255);
    motor4.setSpeed(255);
    pinMode(8,OUTPUT);
    pinMode(10,OUTPUT);
} 

 void loop()
   {
     RecieveData();
     CheckData();
     AccessCheck();
   }

  void RecieveData()
   {
     if(mySerial.available()>0)
      {
         data_temp=mySerial.read();
         RFID_data[read_count]=data_temp;
         read_count++;
      }
   }

   void CheckData()
   {
      if(read_count==12)
       {
          entry_control=true;  
           for(int k=0;k<3;k++)
       {
       for(int j=0;j<12;j++)
       {
          if(Saved_Tags[k][j]==RFID_data[j])
          {
             tag_check=true;
          }
          else
          {
             tag_check=false;
             break;
          }
       }
          if(tag_check==true)
             {
                tag_status=true;
             }
       }

       
           read_count=0;

           
       }//if(read_count==12)      
   }//Check data

void AccessCheck()
{
  if(entry_control==true)
  {
    if(tag_status==true)
    {
     //  digitalWrite(2,HIGH);
       Serial.println("Access Granted");
         digitalWrite(10,HIGH);
         digitalWrite(8,LOW);
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
                         motor4.run(FORWARD);
                         delay(50);
                        }
                  if(value=='2')//BACK
                        {motor1.run(BACKWARD);
                         delay(50);
                         motor2.run(BACKWARD);
                         delay(50);   
                         motor3.run(BACKWARD);
                         delay(50);
                         motor4.run(BACKWARD);
                         delay(50);
                        }
                   if(value=='3')//RIGHT
                        {motor1.run(BACKWARD);
                         delay(50);
                         motor2.run(BACKWARD);
                         delay(50);   
                         motor3.run(FORWARD);
                         delay(50);
                         motor4.run(FORWARD);
                         delay(50);
                        }//LEFT
                   if(value=='4')
                        {motor1.run(FORWARD);
                         delay(50);
                         motor2.run(FORWARD);
                         delay(50);   
                         motor3.run(BACKWARD);
                         delay(50);
                         motor4.run(BACKWARD);
                         delay(50);
                         }

                        
                
                 }
  
              }
      else
        {
         digitalWrite(10,HIGH);
         digitalWrite(8,LOW);
        Serial.println("Access Denied");
        }
        entry_control=false;
        tag_status=false;
      }//if(entry_loop=true)     
   }// void Access check()
