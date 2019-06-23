#define triggerpin 13
#define echopin 12

void setup()
{
  Serial.begin(9600);
  pinMode(triggerpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}
 void loop()
 {
  long duration, distance;
  digitalWrite(triggerpin,LOW);
  delayMicroseconds(2);
  digitalWrite(triggerpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerpin,LOW);
  duration = pulseIn(echopin,HIGH);
  duration = duration/2;
  distance = duration*.034;
  Serial.print(distance);
  Serial.println("cm");
  if(distance<50)
    {
      digitalWrite(2,HIGH);
      delay(100);
      digitalWrite(3,HIGH);
      delay(100);
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(9,LOW);
      delay(100);
      digitalWrite(5,LOW);
      delay(100);
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(2,LOW);
      delay(100);
      
      
    }
  else if(distance>100)
    Serial.println("OUT OF RANGE");
  
  delay(500);
  
  
 }

