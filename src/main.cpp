// COMP-5163 Internet of Things Programming
// Analog Signals Lab
// 2026/10/07
// Kayla Moorcroft (0301408m)
// v 1.0

#include <Arduino.h>
void setup() {
  // configure the USB serial monitor
  Serial.begin(115200);
}
void loop() {
  int iVal;
  // read digitized value from the D1 Mini's A/D convertor
  iVal = analogRead(A0);
  float temp = map(iVal, 0, 1023, 0, 50);
  // print value to the USB port
  Serial.print("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String(temp,2) + " deg. C, which is ");

  if (temp < 10) {
    Serial.println("Cold!");
  }
  else if (temp < 15) {
    Serial.println("Cool");
  }
  else if (temp < 25) {
    Serial.println("Perfect");
  }
  else if (temp < 30) {
    Serial.println("Warm");
  }
  else if (temp < 35) {
    Serial.println("Hot");
  }
  else {
    Serial.println("Too Hot!");
  }

  // wait 2 seconds (2000 ms)
  delay(2000);
}