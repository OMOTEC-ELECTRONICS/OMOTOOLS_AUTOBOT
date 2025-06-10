int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;
int led10 = 11;

void setup() {
  // put your setup code here, to run once:
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
    pinMode(led9, OUTPUT);
    pinMode(led10, OUTPUT);
  }
 void off_led(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);  
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);  
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);  
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
}
  void pattern1()
{
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led5, HIGH);
    delay(200);
    digitalWrite(led6, HIGH);
    delay(200);
    digitalWrite(led7, HIGH);
    delay(200);
    digitalWrite(led8, HIGH);
    delay(200);
    digitalWrite(led9, HIGH);
    delay(200);
    digitalWrite(led10, HIGH);
    delay(200);
   off_led();
}
 void pattern2(){
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led5, HIGH);
    delay(500);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led9, HIGH);
    delay(500);
    off_led();
    }

  void pattern3(){
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led6, HIGH);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led10, HIGH);
  delay(500);
  off_led();
}
void pattern4(){
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led10, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led9, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led7, HIGH);
  delay(500);
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led6, HIGH);
  delay(500);
  off_led();
}
  void pattern5(){
      digitalWrite(led10, HIGH);
      delay(500);
      digitalWrite(led9, HIGH);
      delay(500);
      digitalWrite(led8, HIGH);
      delay(500);
      digitalWrite(led7, HIGH);
      delay(500);
      digitalWrite(led6, HIGH);
      delay(500);
      digitalWrite(led5, HIGH);
      delay(500);
      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led1, HIGH);
      delay(500);
      off_led();
    }

 void pattern6(){
    digitalWrite(led1, HIGH);
    digitalWrite(led10, HIGH);
    delay(500);
    digitalWrite(led9, HIGH);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led3, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led4, HIGH);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    delay(500);
     off_led();
    }

  void pattern7(){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    delay(500);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    }
 void pattern8(){
    digitalWrite(led1, HIGH);
    delay(50);
    digitalWrite(led1, LOW);
    delay(50);
    digitalWrite(led2, HIGH);
    delay(50);
    digitalWrite(led2, LOW);
    delay(50);
    digitalWrite(led3, HIGH);
    delay(50);
    digitalWrite(led3, LOW);
    delay(50);
    digitalWrite(led4, HIGH);
    delay(50);
    digitalWrite(led4, LOW);
    delay(50);
    digitalWrite(led5, HIGH);
    delay(50);
    digitalWrite(led5, LOW);
    delay(50);
    digitalWrite(led6, HIGH);
    delay(50);
    digitalWrite(led6, LOW);
    delay(50);
    digitalWrite(led7, HIGH);
    delay(50);
    digitalWrite(led7, LOW);
    delay(50);
    digitalWrite(led8, HIGH);
    delay(50);
    digitalWrite(led8, LOW);
    delay(50);
    digitalWrite(led9, HIGH);
    delay(50);
    digitalWrite(led9, LOW);
    delay(50);
    digitalWrite(led10, HIGH);
    delay(50);
    digitalWrite(led10, LOW);
    delay(50);
    }
  
void pattern9(){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(150);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(150);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(150);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
     delay(150);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    delay(150);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(150);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(150);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    delay(150);
    digitalWrite(led10, LOW);
    digitalWrite(led9, LOW);
    delay(150);
    }
void loop() {
  // put your main code here, to run repeatedly:
pattern1();
pattern2();
pattern3();
pattern4();
pattern5();
pattern6();
pattern7();
pattern8();
pattern9();
 }
 
