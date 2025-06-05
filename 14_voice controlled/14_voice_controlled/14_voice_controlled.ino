#include <SoftwareSerial.h>                
SoftwareSerial BlueTooth(4,5);    // (TXD, RXD) 
int motorPin1 = 8;                // pin 8 on L293D IC
int motorPin2 = 9;                // pin 9 on L293D IC
int motorPin3 = 10;               // pin 10 on L293D IC
int motorPin4 = 11;               // pin 11 on L293D IC
String BT_input;
void setup()  
{  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  Serial.begin(9600);
  BlueTooth.begin(9600);
}
void loop() 
{
  if (BlueTooth.available())
  {
    BT_input=BlueTooth.readString();
    Serial.println(BT_input);
 if (BT_input=="stop")
    {
      digitalWrite(motorPin1, LOW);   
      digitalWrite(motorPin2, LOW);   
      digitalWrite(motorPin3, LOW);   
      digitalWrite(motorPin4, LOW);   
    }

     if (BT_input=="right")
    {
      digitalWrite(motorPin1, LOW);   
      digitalWrite(motorPin2, HIGH);  
      digitalWrite(motorPin3, LOW);   
      digitalWrite(motorPin4, HIGH);  
      }
      
    if (BT_input=="left")
    {
      digitalWrite(motorPin1, HIGH); 
      digitalWrite(motorPin2, LOW); 
      digitalWrite(motorPin3, HIGH); 
      digitalWrite(motorPin4, LOW);    
      }

    if (BT_input=="backward")
    {
      digitalWrite(motorPin1, LOW); 
      digitalWrite(motorPin2, HIGH); 
      digitalWrite(motorPin3, HIGH); 
      digitalWrite(motorPin4, LOW);   
    }
      
    if (BT_input=="forward")
    {
      digitalWrite(motorPin1, HIGH); 
      digitalWrite(motorPin2, LOW); 
      digitalWrite(motorPin3, LOW); 
      digitalWrite(motorPin4, HIGH);   
    }
  }
 }
