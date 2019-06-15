#define A 8
#define B 9

int a,x,b,y;
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  digitalWrite(A,LOW);
}

void loop() {
 
  x = analogRead(A0);
  b = map(x,0,1023,0,255);
   analogWrite(B,b);
  
}
