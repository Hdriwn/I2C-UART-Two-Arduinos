#include <Wire.h>
//RECEIVING CHAR
void setup() {
  Wire.begin(8);                // join I2C bus with address #8
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
}

void loop() {
  delay(100);
}

// function that executes whenever data is received from master
void receiveEvent(int howMany) {

  while (Wire.available()) { // loop through all bytes received
    char c = Wire.read();    // receive byte as a character
    Serial.print(c);         // print the character
  }
  

}


