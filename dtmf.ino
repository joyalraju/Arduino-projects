#define D1 2
#define D2 3
#define D3 4
#define D4 5
int d1, d2, d3, d4;
#define L1 8
#define L2 9
#define L3 10
#define L4 11

void setup() 
{
Serial.begin(9600);
pinMode(D1,INPUT);
pinMode(D2,INPUT);
pinMode(D3,INPUT);
pinMode(D4,INPUT);
pinMode(L1 ,OUTPUT);
pinMode(L2 ,OUTPUT);
pinMode(L3 ,OUTPUT);
pinMode(L4 ,OUTPUT);
}

void loop() 
{
d1 = digitalRead(D1);  
d2 = digitalRead(D2);
d3 = digitalRead(D3);
d4 = digitalRead(D4);
digitalWrite(L1,LOW);
digitalWrite(L2,LOW);
digitalWrite(L3,LOW);
digitalWrite(L4,LOW);
if(d4==LOW && d3==LOW && d2==LOW && d1==LOW)
  Serial.println("Pressed 0");
else if(d4==LOW && d3==LOW && d2==LOW && d1==HIGH)
 {Serial.println("Pressed 1");
    digitalWrite(L1,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==LOW && d3==LOW && d2==HIGH && d1==LOW)
  {Serial.println("Pressed 2");
    digitalWrite(L2,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==LOW && d3==LOW && d2==HIGH && d1==HIGH)
  {Serial.println("Pressed 3");
    digitalWrite(L1,HIGH);
    digitalWrite(L2,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==LOW && d3==HIGH && d2==LOW && d1==LOW)
  {Serial.println("Pressed 4");
    digitalWrite(L3,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==LOW && d3==HIGH && d2==LOW && d1==HIGH)
  {Serial.println("Pressed 5");
    digitalWrite(L1,HIGH);
    digitalWrite(L3,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==LOW && d3==HIGH && d2==HIGH && d1==LOW)
  {Serial.println("Pressed 6");
    digitalWrite(L3,HIGH);
    digitalWrite(L2,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==LOW && d3==HIGH && d2==HIGH && d1==HIGH)
  {Serial.println("Pressed 7");
    digitalWrite(L1,HIGH);
    digitalWrite(L2,HIGH);
    digitalWrite(L3,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==HIGH && d3==LOW && d2==LOW && d1==LOW)
  {Serial.println("Pressed 8");
    digitalWrite(L4,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
else if(d4==HIGH && d3==LOW && d2==LOW && d1==HIGH)
  {Serial.println("Pressed 9");
    digitalWrite(L1,HIGH);
    digitalWrite(L4,HIGH);
    delay(1000);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
 }
 
}
