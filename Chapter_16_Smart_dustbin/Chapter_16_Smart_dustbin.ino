#include<SoftwareSerial.h>
SoftwareSerial BlueTooth(5,6);
#define echoPin 4
#define trigPin 3
long duration;   //Variable for duration calculation
int distance;      // variable for distance 


void setup() {
  // put your setup code here, to run once:
  BlueTooth.begin(9600);
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;

  BlueTooth.print(distance);
  Serial.print("Distance: ");
  Serial.println(distance);
  // put your main code here, to run repeatedly:
  
  delay(5000);
}
