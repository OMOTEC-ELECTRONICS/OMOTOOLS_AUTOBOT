int motor1 = 7; // define
int motor2 = 9;
int motor3 = 10;
int motor4 = 11;
#define echoPin 2
#define trigPin 3
long duration;
int distance;
// int BT_input;
void setup() {
	 Serial.begin(9600);
      pinMode(motor1, OUTPUT);  // motor1 is output
      pinMode(motor2, OUTPUT);
      pinMode(motor3, OUTPUT);
      pinMode(motor4, OUTPUT);
      pinMode(trigPin,OUTPUT);
      pinMode(echoPin,INPUT);
}

  void forward(){
  analogWrite(motor1, 0);
  analogWrite(motor2, 250);
  analogWrite(motor3, 0);
  analogWrite(motor4, 100); // Forward
  Serial.println("forward");
  }

  void backward(){
  analogWrite(motor2, 250);
  analogWrite(motor1, 0);
  analogWrite(motor4, 100);
  analogWrite(motor3, 0); // backward
  }

  void left(){
  analogWrite(motor1, 0);
  analogWrite(motor2, 250);
  analogWrite(motor3, 100);
  analogWrite(motor4, 0); // left

  }

  void right(){
  analogWrite(motor1, 250);
  analogWrite(motor2, 0);
  analogWrite(motor3, 0);
  analogWrite(motor4, 100); // right

  }
 void stop1(){
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  digitalWrite(motor3, LOW);
  digitalWrite(motor4, LOW); // stop
  }
void loop() {

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration*0.034/2);
  Serial.println(distance);
  
forward();
  if (distance <= 15)
  {
    stop1();
    delay(1000);
    backward();
    delay(2000);
    left();
    delay(1500);
    forward();
    
    Serial.println(" motor stop");

  }
}

