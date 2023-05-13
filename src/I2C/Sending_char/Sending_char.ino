//using sda scl
#include <Wire.h>

void setup() {
  Wire.begin();        // join I2C bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {
  Wire.beginTransmission(8); // transmit to device #8
  Wire.write('x');            // sends one byte
  Wire.endTransmission();    // stop transmitting
Serial.println("x");
  delay(500);
}

