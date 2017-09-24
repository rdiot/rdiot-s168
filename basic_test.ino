/* 8 Channel Solid State Relay Module [S168] : http://rdiot.tistory.com/104 [RDIoT Demo] */

#define RELAY1  9
#define RELAY2  8
#define RELAY3  7
#define RELAY4  6
#define RELAY5  5
#define RELAY6  4
#define RELAY7  3
#define RELAY8  2


void setup()
{    
  // Initialise the Arduino data pins for OUTPUT
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
  pinMode(RELAY5, OUTPUT);
  pinMode(RELAY6, OUTPUT);
  pinMode(RELAY7, OUTPUT);
  pinMode(RELAY8, OUTPUT);

  digitalWrite(RELAY1,LOW);           
  digitalWrite(RELAY2,LOW);           
  digitalWrite(RELAY3,LOW);           
  digitalWrite(RELAY4,LOW);           
  digitalWrite(RELAY5,LOW);           
  digitalWrite(RELAY6,LOW);           
  digitalWrite(RELAY7,LOW);           
  digitalWrite(RELAY8,LOW);           
  delay(2000);

  digitalWrite(RELAY1,HIGH);           
  digitalWrite(RELAY2,HIGH);           
  digitalWrite(RELAY3,HIGH);           
  digitalWrite(RELAY4,HIGH);           
  digitalWrite(RELAY5,HIGH);           
  digitalWrite(RELAY6,HIGH);           
  digitalWrite(RELAY7,HIGH);           
  digitalWrite(RELAY8,HIGH);           


}

 void loop()
{
   digitalWrite(RELAY1,HIGH);          // Turns Relay Off
   digitalWrite(RELAY2,HIGH);          // Turns Relay Off

   delay(1000);                        // Wait 2 seconds
   digitalWrite(RELAY1,LOW);           // Turns ON Relays 1   
   digitalWrite(RELAY2,LOW);           // Turns ON Relays 1   
   delay(1000);
 }
