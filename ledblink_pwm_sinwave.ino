/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

int a;
 int LED[]={2,3,4,5,6};
void setup() {
 for(int i=0; i<6;i++)
 {
  pinMode(LED[i], OUTPUT);
   
}
}
void loop() {
 int i;
 for(i=0;i<6;i++)
 {
  digitalWrite(LED[i],HIGH);
 delay(50);
 digitalWrite(LED[i],LOW);
 delay(25);
 
 }
}
