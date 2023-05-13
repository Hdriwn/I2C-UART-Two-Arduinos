
int position = 0;
int velocity = 0;

void setup() {
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  if (Serial.available()) { // check if data is available
    if (Serial.read() == 0xFF) { // check for start byte
      position = Serial.parseInt(); // read position value from master
      velocity = Serial.parseInt(); // read velocity value from master

      // print received values to serial monitor
      Serial.print("Position: ");
      Serial.println(position);
      Serial.print("Velocity: ");
      Serial.println(velocity);
    }
  }
}
