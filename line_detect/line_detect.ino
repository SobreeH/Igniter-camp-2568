int LEFT_SENSOR = 7;
int MID_SENSOR = 8;
int RIGHT_SENSOR = 9;

void setup() {
  // Configure all three sensor pins as INPUT with internal PULLUP resistors
  pinMode(LEFT_SENSOR, INPUT_PULLUP);
  pinMode(MID_SENSOR, INPUT_PULLUP); // NEW: Pin 8 configuration
  pinMode(RIGHT_SENSOR, INPUT_PULLUP); // NEW: Pin 9 configuration

  // Initialize serial communication
  Serial.begin(57600);
}

void loop() {
  // Read the digital state (0 or 1) of all three sensors
  int left_value = digitalRead(LEFT_SENSOR);
  int mid_value = digitalRead(MID_SENSOR); // NEW: Read middle sensor
  int right_value = digitalRead(RIGHT_SENSOR); // NEW: Read right sensor

  // Print all three values to the serial monitor, separated by tabs or spaces
  Serial.print("L:");
  Serial.print(left_value);
  Serial.print("\tM:"); // Use \t for a tab to separate readings clearly
  Serial.print(mid_value);
  Serial.print("\tR:");
  Serial.println(right_value); // Use println() only on the last print to move to the next line

  // Delay to prevent overwhelming the serial monitor
  delay(200);
}
