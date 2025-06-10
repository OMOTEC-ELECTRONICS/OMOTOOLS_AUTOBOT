#include <SoftwareSerial.h> //include library
SoftwareSerial Bluetooth(4,5); // RX | TX
int irsensor = 2;   //IR connected at D2
int LED=13;          // LED is connected at D13

void setup()
{
 
  Bluetooth.begin(9600);//bluetooth connection
  pinMode(irsensor,INPUT);//sensor as input
  pinMode(LED,OUTPUT);//LED as output
}
void loop()
{
  int sensor_value = digitalRead(irsensor);//reading sensor value
  Bluetooth.println(sensor_value);//sending data
  
  if (sensor_value == LOW ) //obstacle detected
	  {
	    digitalWrite(LED,HIGH);
 	   delay (500);
	  } 

  else if (sensor_value == HIGH )//obstacle not detected
	  {
          digitalWrite(LED,LOW);
         delay (500);
      }
  delay(100);//wait 
}
