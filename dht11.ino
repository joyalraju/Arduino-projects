#include<dht.h>
dht DHT;
#define DHT11_PIN 3
void setup() {
Serial.begin(9600);
Serial.println("Temperature & Humidity Sensor"); }
void loop() { // READ DATA from sensor
int chk = DHT.read11(DHT11_PIN);
Serial.println(" Humidity " );
Serial.println(DHT.humidity, 1);
Serial.println(" Temparature ");
Serial.println(DHT.temperature, 1);
delay(2000);
}
