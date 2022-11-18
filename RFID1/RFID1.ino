//http://www.circuitstoday.com/simple-rfid-based-door-lock-using-arduino
#include<SoftwareSerial.h>
SoftwareSerial mySerial(0,10);
int read_count=0;
int j=0,k=0; // Variables to iterate in for loops
char data_temp, RFID_data[12];
char Saved_Tags[3][12]={
                       {'0','9','0','0','6','4','B','8','D','F','0','A'},
                       {'4','D','0','0','3','2','B','3','A','E','6','2'}};//090064B8DF0A
boolean tag_check,tag_status,entry_control;
void setup()
  {
   pinMode(9,OUTPUT);
   pinMode(13,OUTPUT);
   mySerial.begin(9600);
   Serial.begin(9600);
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
           for(k=0;k<3;k++)
       {
       for(j=0;j<12;j++)
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
       }      
   }

void AccessCheck()
{
if(entry_control==true)
{
if(tag_status==true)
{
  digitalWrite(9,HIGH);
  digitalWrite(13,HIGH);
Serial.println("Access Granted");
}
else
{
  digitalWrite(10,HIGH);
  digitalWrite(13,LOW);
Serial.println("Access Denied");
}
entry_control=false;
tag_status=false;
}}
