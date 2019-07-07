#include<Servo.h>

Servo eee;
int a,x;

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  eee.attach(9);
}

void loop() {
  x = analogRead(A0);
  a = map(x,0,1023,0,179);
  eee.write(a);
  delay(10);
  
}
