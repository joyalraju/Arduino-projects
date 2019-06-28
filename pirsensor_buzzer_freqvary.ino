
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
    {
     for(int i=0;i>180;i++)
    {
   int sinVal = (sin(i*(3.1412/180)));
      int toneVal = 2000+(int(sinVal*1000));
      tone (2, toneVal);
      delay(2);
      
    } 
    }
else 
  noTone(2);
}
