int x,y,a,b;
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
}

void loop() {
  x = analogRead(A0);
  y = analogRead(A1);
  a = map(x,0,1023,0,255);
    analogWrite(5,a);
  b = map(y,0,1023,0,255);
    analogWrite(6,b);
 // if(digitalRead(2)==HIGH)
   // {
     // digitalWrite(8,HIGH);
      //delay(2000);
      //digitalWrite(8,LOW);
      //delay(2000);
    //}
  Serial.println(x);
  Serial.println(y);
  

}
