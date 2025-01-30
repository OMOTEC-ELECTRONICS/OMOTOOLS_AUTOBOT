#include <SoftwareSerial.h>
int PotPin = A1;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

SoftwareSerial BlueTooth(4, 5);    //bluetooth connection Tx-4 and Rx-5

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);            // serial communication 
  BlueTooth.begin(9600);     // Bluetooth communication
}

void loop() {
// put your main code here, to run repeatedly:

  sensorValue = analogRead(PotPin); 
// read the potentiometer value and store in the variable

  sensorValue = sensorValue/4;          // sensorValue is dived by 4

  Serial.println(sensorValue);             // print sensorValue on serial monitor 
 
BlueTooth.println(sensorValue);      // print the value on app
delay(1000);                                           // delay for 1 second
}

