/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13.
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead().

 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground

 * Note: because most Arduinos have a built-in LED attached
 to pin 13 on the board, the LED is optional.


 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/AnalogInput

 */

int ldr = A0;    // select the input pin for the potentiometer
 int led = 3;     // select the pin for the LED
 // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
 Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
 int a= analogRead(ldr);
 Serial.println(a);
 int b= map(a,200,1023,0,255);
// if(a<450)
 //{
  //analogWrite(led,0);
 //}
 //else if(a>450&&a<750)
 //{
  //analogWrite(led,100);
 //}
 //else if(a>750)
 //{
  analogWrite(led,b);
 //}
//delay(500);
}