void setup() {
  // Initialize serial communication at 9600 baud rate for debugging
  Serial.begin(9600);

  // Set digital pin 9 as an output pin to control LED brightness
  pinMode(9, OUTPUT);
}

void loop() {
  Serial.println(analogRead(A0)); //Display the values
  // Read the analog voltage from the potentiometer connected to A0
  int potvalue = analogRead(A0);

  // Print the raw analog value to the serial monitor for observation
  Serial.println(potvalue);

  // Map the raw value (0 to ~510 based on actual pot range) to PWM range (0 to 255)
  int mappedvalue = map(potvalue, 0, 510, 0, 255);

  // Write the mapped PWM value to pin 9 to control LED brightness
  analogWrite(9, mappedvalue);
}
