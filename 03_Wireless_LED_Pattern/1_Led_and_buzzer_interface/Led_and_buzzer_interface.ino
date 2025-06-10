#include <SoftwareSerial.h>      //import Software serial in Arduino
SoftwareSerial Bluetooth(4,5);       // Tx and RX

int buzzer=9;          // buzzer is connected at pin no.9
int LED=10;             // led is connected at pin no.10
char data = 0;        // make a data variable to store the data 

void setup() {
// Set pin as output.
   Bluetooth.begin(9600);               //bluetooth communication
    pinMode(buzzer, OUTPUT);       // set buzzer is output
    pinMode(LED, OUTPUT);           // set led is output 
    Serial.begin(9600);                    // Serial monitor 
}

void loop()
{
// put your main code here, to run repeatedly: 
if (Bluetooth.available() > 0)
 {
data = Bluetooth.read();     //Read the incoming data and store it into variable
Serial.println(data);        //Print Value inside data in Serial monitor

if(data == '1’){                       
// when data 1 is received ON the led
   digitalWrite(LED, HIGH);
}
if(data == '2’){
// when data 2 is received OFF the led
  digitalWrite(LED, LOW);
}
if(data == '3’){
// when data 3 is received ON the Buzzer
  digitalWrite(buzzer, HIGH);
}

if(data == '4’){
// when data 4 is received OFF the Buzzer
  digitalWrite(buzzer, LOW);
}

if(data == '5’){
// when data 5 is received Both led and buzzer ON
    digitalWrite(LED,HIGH);
     digitalWrite(buzzer,HIGH);
}
if(data == '6’){
// when data 6 is received Both led and buzzer OFF
digitalWrite(LED,LOW);
digitalWrite(buzzer,LOW);   
}
}
}

