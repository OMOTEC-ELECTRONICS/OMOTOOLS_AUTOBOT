#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
SoftwareSerial BlueTooth(6, 7);
String BT_input; 
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("   Welcome To   ");
  lcd.setCursor(0,1);
  lcd.print("     OMOTEC     ");
  BlueTooth.begin(9600);
  Serial.begin(9600);
  
}

void loop() 
{
  while (BlueTooth.available())
  {
    //BlueTooth.readString() is used for read the data coming from bluetooth
    BT_input=BlueTooth.readString();
    
    byte firstCommaIndex = BT_input.indexOf(',');  // this command is used to separate the data coming from Bluetooth with first comma
    
    byte secondCommaIndex = BT_input.indexOf(',', firstCommaIndex +1); // this command is used to separate the data coming from Bluetooth with second comma 
    
    String date=BT_input.substring(0,firstCommaIndex); // the data received from phone  will store in Date  variable
    
    String times=BT_input.substring(firstCommaIndex+1,secondCommaIndex); // the data received from phone  will store in time  variable
    
    Serial.println(BT_input);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Date:"); //display date
    lcd.print(date);
    Serial.println(date);
    lcd.setCursor(0,1);
    lcd.print("Time:"); //display time
    lcd.print(times);
    Serial.println(times);
    delay(1000);
  }
}
