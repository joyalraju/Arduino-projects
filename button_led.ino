
#define IR 2
void setup() {
   pinMode(IR,INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop() {
 if(digitalRead(IR)==HIGH)
 {digitalWrite(3,HIGH);
 delay(1000);
 digitalWrite(3,LOW);
 delay(100);
 digitalWrite(4,HIGH);
 delay(1000);
 digitalWrite(4,LOW);
 delay(100);
 digitalWrite(5,HIGH);
 delay(1000);
 digitalWrite(5,LOW);
 delay(100);

  
 
 }
 
}
