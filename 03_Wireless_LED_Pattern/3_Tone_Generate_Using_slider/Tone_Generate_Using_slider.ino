#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(4,5);     // TX, RX

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
Bluetooth.begin(9600);         	 //Bluetooth communication
Serial.begin(9600);      	// Serial monitor communication
}

void loop() {
  // put your main code here, to run repeatedly:

if (Bluetooth.available()>0)
{
int data = Bluetooth.read();      //Read the incoming data and store it into variable data
Serial.println(data);                 //print data on serial monitor
analogWrite(3,data);    	//change the led intensity with data value
}
}
