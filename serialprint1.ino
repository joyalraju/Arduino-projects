int x=0;
float y=0.0;
void setup() {
  Serial.begin(9600);
  
  

}

void loop() {
  x=x+1;
  y=y+0.5;
  Serial.print("x= ");
   Serial.println(x);
  delay(1000);
   Serial.print("y= ");
    Serial.println(y);
  delay(1000);
   
}
