#include <SoftwareSerial.h>
#define LED 13
int a=8;
int b=9;
SoftwareSerial BT(10, 11); // RX,TX
int Data;
void setup() {
  BT.begin(9600);
  BT.println("PRESS 1 FOR ON & PRESS 0 FOR OFF");
  pinMode(LED,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
}
void loop() {
   if (BT.available()){
   Data=BT.read();
   if(Data=='1')
   {   
   digitalWrite(LED,HIGH);
   BT.println("LED ON");
   }
   if (Data=='0')
   {
   digitalWrite(LED,LOW);
   BT.println("LED OFF");
   }
  if (Data=='2')
   {
   digitalWrite(a,HIGH);
  delay(2000);
    digitalWrite(a,LOW);
   }
   if (Data=='3')
   {
   digitalWrite(b,HIGH);
   delay(2000);
    digitalWrite(b,LOW);
    }
   }
   delay(100);
}
