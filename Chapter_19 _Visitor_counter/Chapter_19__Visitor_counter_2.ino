#include <SoftwareSerial.h> // include library
#include <LiquidCrystal.h> // include library

SoftwareSerial Bluetooth(6, 7); // RX | TX
int PIRsensor = 13; // sensor connected at D13
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int counter = 0;
bool lastSensorState = LOW; // to keep track of the last sensor state

void setup() {
  Serial.begin(9600); // serial communication
  Bluetooth.begin(9600); // bluetooth connection
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Visitor Counter");
  pinMode(PIRsensor, INPUT); // sensor as input
}

void loop() {
  int sensor_value = digitalRead(PIRsensor); // reading sensor value 

  // Check for Bluetooth commands
  if (Bluetooth.available() > 0) {
    int data = Bluetooth.read(); // Read the incoming data
    if (data == '0') {
      counter = 0; // Reset counter
      lcd.setCursor(0, 1);
      lcd.print("Count - 0      "); // Clear previous count
      Serial.println("Count reset to 0");
      Bluetooth.println(counter); // Send reset confirmation
    }
  }

  // Check for motion detection
  if (sensor_value == HIGH && lastSensorState == LOW) { // Motion detected
    counter++;
    lastSensorState = HIGH; // Update last state
    lcd.setCursor(0, 1);
    lcd.print("Count - ");
    lcd.setCursor(9, 1);
    lcd.print(counter);
    Serial.print("Count - ");
    Serial.println(counter);
    Bluetooth.println(counter); // Send count via Bluetooth
  } else if (sensor_value == LOW) {
    lastSensorState = LOW; // Update last state if no motion
  }

  delay(1000); // wait 
}
