long duration;
int distanceCm;


void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);//trigger
  pinMode(9,INPUT);//echo
Serial.begin(9600);//BAUD RATE
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(10,LOW);
  delayMicroseconds(2);
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);
  duration = pulseIn(9,HIGH);//pulseIn converts digital pin to analog pin
  distanceCm = (duration*0.034)/2;//duration*0.017;
  Serial.println(distanceCm);
  if(distanceCm>25)
  {digitalWrite(11,LOW);
  digitalWrite(8,HIGH);
  }
  else
  {
   digitalWrite(11,HIGH);
  digitalWrite(8,LOW);
  }
}
