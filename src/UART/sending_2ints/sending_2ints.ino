//using tx rx
//sending two integers over 
void setup() {
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  int position = 10; // example position value
  int velocity = 20; // example velocity value

  // send start byte, position and velocity values to slave
  Serial.write(0xFF); // start byte
  Serial.print(position);
  Serial.print(",");
  Serial.println(velocity);

  delay(1000); // wait for a second
}

