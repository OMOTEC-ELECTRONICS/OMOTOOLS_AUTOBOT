#include <Adafruit_NeoPixel.h>            // import neopixel library in Arduino
#include <SoftwareSerial.h>                   // import serial library in Arduino

SoftwareSerial BlueTooth(5, 4);             // Bluetooth connection Tx- 4 and Rx-5

#define PIN 3                                            // neopixel input pin connected to pin 3
#define NUMPIXELS 16                       // Number of Leds

char BT_input;                                      // variable to store the data 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayVal = 10; // wait for 10 usec for every time this called
int redColor = 0;                                // red color variable
int greenColor = 0;                            // green color variable
int blueColor = 0;                              // blue color variable

void setup() {
  BlueTooth.begin(9600);                      // Bluetooth communication
  Serial.begin(9600);                               // Serial communication
  pixels.begin();                                        // pixel communication
}  

void loop() {  
  if (BlueTooth.available()) {                    // Bluetooth checking
    BT_input = BlueTooth.read();                  // store the data in BT_input variable 
    Serial.println(BT_input);                             // print the data on serial monitor    

    if (BT_input == 'R') { // if R data is received it will generate first pattern
      Serial.println("Red");

      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 0; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50); // red
      } 
  for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 0; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50); // blue
      }

      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 255; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50); // yellow
      }

      for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 255; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50); // cyan
      }       

      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 0; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50); // purple
      }  

      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 255; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50); // white
      }
    }

 // if B data is received it will generate second pattern
    if (BT_input == 'B') {
      Serial.println("pattern2");
      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 0; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(150); // red
        pixels.clear();
      } 

      for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 255; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(150); // green
        pixels.clear();
      }
    
      for (int i = 0; i < 16; i++) {
                redColor = 0; greenColor = 0; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(150); // blue
        pixels.clear();
      }
    }

    // if C data is received it will generate Third pattern
    if (BT_input == 'C') {
      Serial.println("pattern3");
      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 0; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50);
      }

pixels.clear();

      for (int i = 15; i >= 0; i--) { // Corrected index to start from 15
        redColor = 255; greenColor = 0; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50);
      }

      for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 255; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50);
      }

      pixels.clear();
      for (int i = 15; i >= 0; i--) { // Corrected index to start from 15
        redColor = 0; greenColor = 255; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50);
      }

      pixels.clear();
      for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 0; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50);
      }

      pixels.clear();
      for (int i = 15; i >= 0; i--) { // Corrected index to start from 15
        redColor = 0; greenColor = 0; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
        delay(50);
      }
      pixels.clear();
    }

    // if D data is received it will generate Fourth pattern
    if (BT_input == 'D') {
      Serial.println("pattern4");
      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 0; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show(); 
      } 


for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 255; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();    
      }

      for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 0; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
      }

      for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 0; blueColor = 255;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();      
      } 

      for (int i = 0; i < 16; i++) {
        redColor = 0; greenColor = 255; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();    
      }

      for (int i = 0; i < 16; i++) {
        redColor = 255; greenColor = 0; blueColor = 0;
        pixels.setPixelColor(i, redColor, greenColor, blueColor);
        pixels.show();
      }
    }
  }
}
