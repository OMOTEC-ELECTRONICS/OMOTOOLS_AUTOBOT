#include <SoftwareSerial.h>  //include library
SoftwareSerial Bluetooth(6,7); // RX | TX

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
// Set pin as output.
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  Bluetooth.begin(9600);//bluetooth connection 
  Serial.begin(9600);
}
void loop()
{
 if (Bluetooth.available() > 0) 
{
 String data = Bluetooth.readString();      //Read the incoming data and 				store it into variable data
 lcd.setCursor(0, 0);
 lcd.println(data);
 Serial.println(data);        //Print Value inside data in Serial monitor
  
 if(data == '4’)
{
  lcd.clear();
  delay(500);
}
 delay(1000);
 lcd.clear();
}
}
