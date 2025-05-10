#include <Arduino.h>
const int a=13;
const int b=12;
const int f=11;
const int g=6;
const int c=9;
const int d=2;
const int e=7;

void disp0(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(c,HIGH);
  delay(2000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);


}
void disp1(){
   digitalWrite(f,HIGH);
   
  digitalWrite(e,HIGH);
  delay(2000);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
}
void disp2(){
 digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  delay(2000);
   digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);

}
void disp3(){
 digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  delay(2000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
}
void disp4(){
  digitalWrite(f,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  delay(2000);
  digitalWrite(f,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
}
void disp5(){
digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  delay(2000);
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW); 


}
void disp6(){
digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
  delay(2000);
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
    digitalWrite(e,LOW); 
}
void disp7(){
digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  delay(2000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
}
void disp8(){

  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(b,HIGH);
    delay(2000);
     digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(b,LOW);
}
void disp9(){
digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(b,HIGH);
    
    delay(2000);
    digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(b,LOW);
}
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
}

void loop() {
  disp0();
  delay(1000);
  disp1();
  delay(1000);
  disp2();
  delay(1000);
  disp3();
  delay(1000);
  disp4();
  delay(1000);
  disp5();
  delay(1000);
  disp6();
  delay(1000);
  disp7();
  delay(1000);
  disp8();
  delay(1000);
  disp9();
  delay(1000);

}