#include <LiquidCrystal.h>
int slot1 = 8;   //Connect IR sensor on digital pin5 for sLOT 1
int slot2 = 9;   //sLot2 pin on digital 4 
int gate_red1 = 6;
int gate_red2 = 10;

void setup() 
{
  pinMode(slot1,INPUT);  //setting slot pins  & gate IR sensor as input to arduino
  pinMode(slot2,INPUT);
  pinMode(gate_red1,OUTPUT);
  pinMode(gate_red2,OUTPUT);
  Serial.begin(9600);       //initialzing Serial monitor
}

void loop() 
{
  int data1=digitalRead(slot1);
  int data2=digitalRead(slot2);
  Serial.print(data1);
  Serial.println(data2);
  if( (digitalRead(slot1))==0 && (digitalRead(slot2))==0)   //slot1 & slot2 not free
  {
    delay(1000);
    digitalWrite(gate_red1,HIGH);
    digitalWrite(gate_red2,HIGH);
  }
  if( (digitalRead(slot1)) == 1 && digitalRead(slot2) == 0)  //car on slot2,slot1 free
  {
    delay(1000);
    digitalWrite(gate_red2,HIGH);
  }
  if( digitalRead(slot1) ==0 && (digitalRead(slot2)) ==1)     //car on slot1,slot2 free
  {
    delay(1000);
    digitalWrite(gate_red1,HIGH);
    delay(100);
  }
  if( (digitalRead(slot1)) == 1 && (digitalRead(slot2)) == 1)
  {
    delay(1000);
    digitalWrite(gate_red1,LOW);
    digitalWrite(gate_red2,LOW);
    delay(100);
  }
  delay(1000);
}
