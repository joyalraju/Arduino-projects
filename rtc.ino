#include <Wire.h>
#include <RealTimeClockDS1307.h>
#define Display_Clock_Every_N_Seconds 10 
#define Display_ShortHelp_Every_N_Seconds 60
String tz;
int hours = 0;
int minutes = 0;
int seconds = 0;
int dates = 0;
int months = 0;
int years = 0;
int ap = 0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  RTC.readClock();
    if(ap == 1)
    {
    tz = "PM";
    }
    else
    {
    tz ="AM";
    }
    hours = RTC.getHours();
    minutes = RTC.getMinutes();
    seconds = RTC.getSeconds();
    ap = RTC.isPM();
    dates = RTC.getDate();
    months = RTC.getMonth();
    years = RTC.getYear();
    Serial.print(hours);
     Serial.print(":");
   Serial.print(minutes);
     Serial.print(":");
    Serial.print(seconds);
     Serial.print(" ");
   Serial.println(tz);
    
    delay(1000);
  
}
