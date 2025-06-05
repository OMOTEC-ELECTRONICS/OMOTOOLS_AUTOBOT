#define trigPin_1 3
#define echoPin_1 2

const int mot1 = 7;
const int mot2 = 9;
const int mot3 = 10;
const int mot4 = 11;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin_1, OUTPUT);
  pinMode(echoPin_1, INPUT);
  pinMode(mot1, OUTPUT);
  pinMode(mot2, OUTPUT);
  pinMode(mot3, OUTPUT);
  pinMode(mot4, OUTPUT);
}

void loop() {
  long duration, distance_1;
  
  // Trigger the ultrasonic pulse
  digitalWrite(trigPin_1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin_1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_1, LOW);
  
  // Measure the echo pulse duration
  duration = pulseIn(echoPin_1, HIGH);
  
  // Convert the time to distance in cm
  distance_1 = microsecondsToCentimeters(duration);
  
  Serial.print("Distance: ");
  Serial.println(distance_1);
  
  if (distance_1 < 40) {
    Serial.println("Moving Forward");
    
    // Move forward
    digitalWrite(mot1, LOW);
    digitalWrite(mot2, HIGH);
    digitalWrite(mot3, LOW);
    digitalWrite(mot4, HIGH);
    
  } else {
    Serial.println("Stopping");
    
    // Stop the motors
    digitalWrite(mot1, LOW);
    digitalWrite(mot2, LOW);
    digitalWrite(mot3, LOW);
    digitalWrite(mot4, LOW);
  }
  
  delay(100);  // Adjust the delay for smoother motion
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
