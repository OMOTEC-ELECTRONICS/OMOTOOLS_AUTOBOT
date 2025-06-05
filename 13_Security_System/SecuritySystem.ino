 #include <SoftwareSerial.h>
 #include <Servo.h>
 Servo myservo;
 String BT_input;

 SoftwareSerial Bluetooth (5,6);
 int buzz = 12;
 void setup()
 {

  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode(buzz, OUTPUT);
  myservo.attach(9);

 }
void loop()
{
  if (Bluetooth.available()>0)
   {
    BT_input = Bluetooth.readString();
    Serial.println(BT_input);
    if (BT_input.toInt()==1234)
    {
      Serial.println("Password correct");
      myservo.write(180);
      delay(3000);
      myservo.write(0);
    }
  else{
    Serial.println("Incorrect");
    myservo.write(0);
    digitalWrite(buzz, HIGH);
    delay(2000);
    digitalWrite(buzz, LOW);
    delay(100);
  }   
      }

}