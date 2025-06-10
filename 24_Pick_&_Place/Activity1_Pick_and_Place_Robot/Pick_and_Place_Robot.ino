 #include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial BlueTooth(4,5);    // (TXD, RXD) of HC-06
String BT_input;                    // to store input character received via BT.
int motorPin1 = 8;                // connect input pin to Arduino pin 8
int motorPin2 = 9;               // connect input pin to Arduino pin 9
int motorPin3 = 10;            // connect input pin to Arduino pin 10
int motorPin4 = 11;           // connect input pin to Arduino pin 11
Servo myservo;                  // create servo object to control a servo
void setup()
{
  myservo.attach(6);  // attaches the servo on pin 6
  BlueTooth.begin(9600);                 //calling bluetooth
  Serial.begin(9600);                    // calling serial monitor
  pinMode(motorPin1, OUTPUT);        //motor 1 as output
  pinMode(motorPin2, OUTPUT);        //motor 2 as output
  pinMode(motorPin3, OUTPUT);        //motor 3 as output
  pinMode(motorPin4, OUTPUT);        //motor 4 as output
}
void loop()
{
  // if bluetooth is available then
 
  if (BlueTooth.available())
  {
    
    BT_input = BlueTooth.readString();   //read incoming data from bluetooth and store in BT_input
    Serial.println(BT_input);
    // when bluetooth receive S then stop the motor
    if (BT_input == "Stop")     //if input is Stop then motor will stop
    {
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);
      digitalWrite(motorPin3, LOW);
      digitalWrite(motorPin4, LOW);
    }

    else if (BT_input == "Right")  //if input is Right then bot will turn Right
    {
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, HIGH);
      digitalWrite(motorPin3, LOW);
      digitalWrite(motorPin4, HIGH);
      Serial.println("Right");
    }
 else if (BT_input == "Left") {   //if input is left then bot will turn left 
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, LOW);
      digitalWrite(motorPin3, HIGH);
      digitalWrite(motorPin4, LOW);
      Serial.println("Left");
    }
else if (BT_input == "Backward") //if input is Backward then bot will turn Backward
    {
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, LOW);
      digitalWrite(motorPin3, LOW);
      digitalWrite(motorPin4, HIGH);
      Serial.println("Backward");
    }
 else if (BT_input == "Forward") //if input is forward then bot will turn forward
    {
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, HIGH);
      digitalWrite(motorPin3, HIGH);
      digitalWrite(motorPin4, LOW);
      Serial.println("Forward");
    }
else if(BT_input == "90") //if input is 90 then motor will rotate 90 deg.
    {
      myservo.write(90);
    }
   else if(BT_input == "135") //if input is 135 then motor will rotate 135 deg.
    {
      myservo.write(135);
    }

    else if(BT_input == “165") //if input is 165 then motor will rotate 165 deg
    {
      myservo.write(165);
    }
  }
}
