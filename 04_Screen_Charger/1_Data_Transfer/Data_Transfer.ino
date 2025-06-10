#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(4,5); // RX | TX
int button1= 6;	 //button connected at D6
int button2= 7;	//button connected at D7
int button3= 8;	//button connected at D8
int button4= 9;	//button connected at D9



void setup()
{
  Serial.begin(9600);
  Bluetooth.begin(9600);	 //bluetooth communication
  pinMode(button1,INPUT);	// button as input
  pinMode(button2,INPUT);	// button as input
  pinMode(button3,INPUT);	// button as input
  pinMode(button4,INPUT);	// button as input
  
 
}
void loop()
{
  
   int sensor_value1= digitalRead(button1);// reading the values
   int sensor_value2= digitalRead(button2);// reading the values
   int sensor_value3= digitalRead(button3);// reading the values
   int sensor_value4= digitalRead(button4);// reading the values
   delay(500);

   Serial.print(sensor_value1);	//display on serial monitor
   Serial.print(sensor_value2); 	//display on serial monitor
   Serial.print(sensor_value3); 	//display on serial monitor
   Serial.println(sensor_value4); 	//display on serial monitor
   
   Bluetooth.print(sensor_value1);// send the data through bluetooth
   Bluetooth.print(sensor_value2);// send the data through bluetooth
   Bluetooth.print(sensor_value3);// send the data through bluetooth
   Bluetooth.println(sensor_value4);// send the data through bluetooth
  delay(500);
   
}
