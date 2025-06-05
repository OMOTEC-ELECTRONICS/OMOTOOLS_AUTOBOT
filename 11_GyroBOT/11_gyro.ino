#include <SoftwareSerial.h>
SoftwareSerial BlueTooth(4,5);    // (TXD, RXD) of bluetooth module
char BT_input;                    // To store input character received via BT.
int motorPin1 = 8;                
int motorPin2 = 9;                
int motorPin3 = 10;               
int motorPin4 = 11;        
void setup()  
{
  BlueTooth.begin(9600);  
  Serial.begin(9600);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}
void loop() 
{
  if (BlueTooth.available())
  {
   BT_input=BlueTooth.read();

if (BT_input=='S')
    {
      digitalWrite(motorPin1, LOW);   
      digitalWrite(motorPin2, LOW);   
      digitalWrite(motorPin3, LOW);   
      digitalWrite(motorPin4, LOW);   
      Serial.println("Motors are Off");
    }
    else if (BT_input=='R')
    {
digitalWrite(motorPin1, HIGH); 
digitalWrite(motorPin2, LOW); 
digitalWrite(motorPin3, HIGH); 
digitalWrite(motorPin4, LOW); 
Serial.println("Motors are rotating right");}
  }
    
   else if (BT_input=='L')
    {
      digitalWrite(motorPin1, LOW);   
      digitalWrite(motorPin2, HIGH);  
      digitalWrite(motorPin3, LOW);   
      digitalWrite(motorPin4, HIGH);  
      Serial.println("Motors are rotating left");
        }

else if (BT_input=='B')
    {
      digitalWrite(motorPin1, HIGH); 
      digitalWrite(motorPin2, LOW); 
      digitalWrite(motorPin3, LOW); 
      digitalWrite(motorPin4, HIGH); 
      Serial.println("First Motor is rotating right & Second is left");
    }
  else if (BT_input=='F')
    {
      digitalWrite(motorPin1, LOW); 
      digitalWrite(motorPin2, HIGH); 
      digitalWrite(motorPin3, HIGH); 
      digitalWrite(motorPin4, LOW); 
      Serial.println("First Motor is rotating Left & second is right");
    }
 }
