
void setup() {
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(2,OUTPUT);
}

void loop() {

  int x=analogRead(A0);
  //int d=x*1024/5;
  Serial.println(x);
  if(x>700)
    {digitalWrite(2,HIGH);
      delay(100);
    digitalWrite(2,LOW);
      delay(500);
    digitalWrite(2,HIGH);
      delay(100);
    digitalWrite(2,LOW);
    delay(500);    
    digitalWrite(2,HIGH);
      delay(100);
    digitalWrite(2,LOW);
    delay(500);
    } 

}
