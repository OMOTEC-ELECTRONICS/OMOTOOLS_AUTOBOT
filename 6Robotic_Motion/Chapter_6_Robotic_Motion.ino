#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(5,6); // RX | TX
char data = 0;
int motor1=10;
int motor2=11;

void setup() {

Bluetooth.begin(9600); //bluetooth communication
Serial.begin(9600);
pinMode(10,OUTPUT);//motor connection
pinMode(11,OUTPUT);//motor connection

}
void loop() {

if (Bluetooth.available()>0)
{

data = Bluetooth.read();      //Read the incoming data and store it into variable data

  Serial.println(data);       //Print Value inside data in Serial monitor


if(data == '1'){ 
//clockwise
     digitalWrite(10, LOW);
     digitalWrite(11, HIGH);
}

else if(data == '2'){
//anticlockwise
     digitalWrite(10, HIGH);
     digitalWrite(11, LOW);   
}

else if(data == '3'){
//stop motor
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);   

}
}
}
