#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(4,5); // RX | TX

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
Bluetooth.begin(9600); //bluetooth communication
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if (Bluetooth.available()>0)
{
int data = Bluetooth.read();      //Read the incoming data and store it into variable data
Serial.println(data);       // print the data value on serial monitor 
analogWrite(3,data);      // write the data receive from the app
}
}
