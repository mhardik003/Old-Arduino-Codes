  //http://www.circuitstoday.com/interfacing-rfid-with-arduino
 #include <SoftwareSerial.h>

SoftwareSerial mySerial(19, 10);
void setup()
{
  mySerial.begin(9600); // Setting the baud rate of Software Serial Library  
  Serial.begin(9600);  //Setting the baud rate of Serial Monitor 
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
 }
 void loop()
  {
  
    
   if(mySerial.available()>0)
   {
   Serial.write(mySerial.read());
   }
   
  }
  /*
   * mySerial.available() – checks for any data coming from RFID reader module through the SoftwareSerial pin 9. 
   * Returns the number of bytes available to read from software serial port. Returns a -1 if no data is available to read.

    mySerial.read() – Reads the incoming data through software serial port.

    Serial.write() – Prints data to serial monitor of arduino. So the function Serial.write(mySerial.read()) – 
    prints the data collected from software serial port to serial monitor of arduino.
   */
