// C++ code
//
/*
  describe your code here
*/

#include <Servo.h>

int 9 = 3;
int r1 = 5; 
int l2 = 10;
int r2 = 11;

void setup(){
  pinMode(9,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(r2,OUTPUT);
  
}

void forward()
{
  digitalWrite(9,1); 
  digitalWrite(r1,0);
  digitalWrite(l2,0);
  digitalWrite(r2,1);
}

void backward()
{
  digitalWrite(9,0); 
  digitalWrite(r1,1);
  digitalWrite(l2,1);
  digitalWrite(r2,0);
  
}

void left()
{
  digitalWrite(9,1); 
  digitalWrite(r1,0);
  digitalWrite(l2,1);
  digitalWrite(r2,0);
  
}

void right()
{
  digitalWrite(9,0); 
  digitalWrite(r1,1);
  digitalWrite(l2,0);
  digitalWrite(r2,1); 
  
}


void loop(){
  forward();
  delay(200);//200ms
  
  
}
