#include <SoftwareSerial.h>

char BT_input;
SoftwareSerial BlueTooth(4, 5);


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
BlueTooth.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  if (BlueTooth.available())
  {
   BT_input=BlueTooth.read();
   Serial.write(BT_input);
  }
  if (Serial.available())
  {
    BT_input = Serial.read();
   BlueTooth.write(BT_input);
  
}
}
