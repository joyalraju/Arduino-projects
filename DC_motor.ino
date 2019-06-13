#define A 8
#define B 9


void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
digitalWrite(A,LOW);
}

void loop() {
  analogWrite(B,255);
}
