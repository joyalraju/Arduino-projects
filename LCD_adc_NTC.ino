/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>
float Vin = 5.0, Rt = 10000, R0 = 10000, T0 = 298.15, Vout = 0.0, Rout = 0.0, T1 = 273.15, T2 = 373.15, RT1 = 35563, RT2 = 549, beta = 0.0, Rinf = 0.0, TempK = 0.0, TempC = 0.0;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

  
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.clear();
  pinMode (A0,INPUT);
  Serial.begin(9600);
  beta = (log(RT1/RT2))/((1/T1)-(1/T2));
  Rinf = R0*exp(-beta/T0);
 
    
}


void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  Vout = Vin*((float)(analogRead(A0))/1024.0);
  Rout = (Rt*Vout/(Vin-Vout));

  TempK = (beta/log(Rout/Rinf));
  TempC = TempK-273.15;

  lcd.setCursor(0, 0);
  lcd.print("TEMP= ");
  Serial.println("TEMP=");
  lcd.print(TempC);
  Serial.print(TempC);
  lcd.write(0Xdf);  //to display degree symbol. this is the ASCII value
  lcd.print("C ");
  lcd.setCursor(0,1);
  lcd.print("TEMP= ");
  Serial.println("TEMP=");  
  lcd.print((TempC*9)/5+32);  //C to F
  lcd.write(0Xdf);
  lcd.print("F");
  delay(1200);
  
  // print the number of seconds since reset:
}

