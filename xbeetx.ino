void setup() {
Serial.begin(250000);
}
void loop() {
Serial.println("H"); //turn on the LED
delay(100);
Serial.println("L");//turn off the LED
delay(50);
}
