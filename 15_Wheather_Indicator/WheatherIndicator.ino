#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(4,5);
int tempsensor = A0;

int led1 = 11;
int led2 = 10;
int led3 = 9 ;

void setup()
{
  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode(tempsensor, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  float sensor_value = analogRead(tempsensor);
  sensor_value = (sensor_value*500)/1023;
  Bluetooth.println(sensor_value);
  Serial.println(sensor_value);
  if (sensor_value >= 30)
  {
    RGB_color(255, 0, 0); //red
    delay(1000);
    Serial.println("Temperature is too HIGH");
  }

  else if (sensor_value <= 25)
  {
    RGB_color(0, 255, 255); //cyan
    delay(1000);
    Serial.println("Temperature is too cold");
  }
  else  
  {
    RGB_color(0, 0, 255); //blue
    delay(1000);
    Serial.println("Temperature is stable");
  }
  delay (1000);
}


void RGB_color(int red_light_value, int green_light_value, int blue_light_value )
{
  analogWrite(led1, red_light_value);
  analogWrite(led2, green_light_value);
  analogWrite(led3, blue_light_value);
}


 
