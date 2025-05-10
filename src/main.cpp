#include <Arduino.h>
#if 0
const int a=13;
const int b=12;
const int f=11;
const int g=6;
const int c=9;
const int d=2;
const int e=7;
#endif
const uint8_t pins[]={  13,12,11,6,9,2,7};
const byte pinOut[10][7]={{1,1,1,0,1,1,1},
                          {0,0,1,0,0,0,1},
                          {1,1,0,1,0,1,1},
                          {1,1,0,1,1,1,0},
                          {0,1,1,1,1,0,0},
                          {1,0,1,1,1,1,0},
                          {1,0,1,1,1,1,1},
                          {1,1,0,0,1,0,0},
                          {1,1,1,1,1,1,1},
                          {1,1,1,1,1,0,0}
                          };
void dispAll(int digit){
for (int i = 0; i < 7; i++)
{
  digitalWrite(pins[i],pinOut[digit][i]);
  
}
delay(1000);
for (int i = 0; i < 7; i++)
{
  digitalWrite(pins[i],LOW);
  
}






}                          
 #if 0                         
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
#endif
void setup() {
  for (int i = 0; i < 10; i++)
  {
    pinMode(pins[i],OUTPUT);
  }
  
}

void loop() {
 for (int i = 0; i < 10; i++)
 {
  dispAll(i);
  delay(1000);
 }
 

}