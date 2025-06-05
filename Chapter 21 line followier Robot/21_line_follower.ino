int mot1=6;
int mot2=9;//left
int mot3=10;
int mot4=11;//right

int fast=100;// forward speed
int slow=80;//turn speed
int left=3;
int right=2;
int Left,Right;

void setup()
{
  
  pinMode(mot1,OUTPUT);
  pinMode(mot2,OUTPUT);
  pinMode(mot3,OUTPUT);
  pinMode(mot4,OUTPUT);
  pinMode(left,INPUT);
  pinMode(right,INPUT);
  Serial.begin(9600);
 
}


void loop()
{
  Left=digitalRead(left);
  right=digitalRead(right);
    
   Serial.println(Left);
   Serial.println(Right);

  if(Left==0 && Right==1) // left turn
  {
    digitalWrite(mot1,LOW);
    analogWrite (mot2,HIGH);    
    digitalWrite(mot3,HIGH);
    analogWrite (mot4,LOW);
Serial.println(“condition: Left Turn”);
  }
  else if(Left==1 && Right==0) // right turn
  {
    digitalWrite(mot1,HIGH);
    analogWrite (mot2,LOW);    
    digitalWrite(mot3,LOW);
    analogWrite (mot4,HIGH);
  Serial.println(“condition:Right Turn”);
  }


 else if(Left==1 && right==1) // forward
  {
    digitalWrite(mot1,LOW);
    analogWrite (mot2,HIGH);    
    digitalWrite(mot3,LOW);
    analogWrite (mot4,HIGH);
Serial.println(“condition: Forward”);
  }
  else if(Left==0 && right==0) // forward
  {
    analogWrite(mot1,LOW);
    digitalWrite (mot2,LOW);    
    analogWrite (mot3,LOW);
    digitalWrite (mot4,LOW);
Serial.println(“condition: stop”);
  }
}
