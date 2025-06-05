#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(4,5); // Bluetooth connection 4-Tx and 5-Rx
int LDR = 2;                  //LDR value
int LED=13;                   // LED
int Buzzer=12;               //buzzer
void setup()
{
  Serial.begin(9600);
  Bluetooth.begin(9600);         //bluetooth communication
  pinMode(LDR,INPUT);            // sensor
  pinMode(LED,OUTPUT);        // LED as output
  pinMode(Buzzer,OUTPUT);       //buzzer as output 

}

void loop()
{
  int sensor_value= digitalRead(LDR);// reading the values
   Bluetooth.println(sensor_value);// send the data
   delay(1000);   
  if (sensor_value == HIGH ) //checking the data
  {
    Serial.println("DARKNESS DETECTED");
    digitalWrite(LED,HIGH);
     digitalWrite(Buzzer,HIGH);
    delay (500);
    digitalWrite(Buzzer,LOW); 
    digitalWrite(LED,LOW);    
  } 
  else 
  {
    Serial.println("BRIGHTNESS DETECTED");
       digitalWrite(LED,LOW); 
       digitalWrite(Buzzer,LOW);
         delay (500);  
  } 
}
