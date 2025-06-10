#include <SoftwareSerial.h>
char BT_input;
int LED = 9;
SoftwareSerial BlueTooth(4, 5);

void setup() {
  // put your setup code here, to run once:
BlueTooth.begin(9600);
pinMode(LED, OUTPUT);
}

void loop() {
   if (BlueTooth.available()>0)
    {
    BT_input= BlueTooth.read();
   
    }
   if (BT_input == 'N')
    {
    digitalWrite(LED, HIGH);
     BlueTooth.print("LED IS ON");
    BlueTooth.print("\n\r");
    }
   else if(BT_input=='F'){
     digitalWrite(LED, LOW);
     BlueTooth.print("LED IS OFF");
     BlueTooth.print("\n\r");
    }
   }
