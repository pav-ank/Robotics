// Variable to hold the state of the button: either HIGH (not pressed) or LOW (pressed)
int buttonState = 0;

void setup() {
  // Set pin 7 as an input with the internal pull-up resistor enabled.
  // This means pin 7 will default to HIGH unless connected to ground through the button.
  pinMode(7, INPUT_PULLUP);

  // Set pin 8 as an output to control the LED.
  pinMode(8, OUTPUT);

  // Begin serial communication at a baud rate of 9600 bits per second.
  // This allows monitoring the state of the button using the Serial Monitor.
  Serial.begin(9600);
}

void loop() {
  // Read the current state of the button from pin 7.
  // Because of INPUT_PULLUP, it reads HIGH when the button is not pressed,
  // and LOW when the button is pressed (as it connects pin 7 to GND).
  buttonState = digitalRead(7);

  // If the button is pressed (pin 7 reads LOW), turn on the LED.
  if (buttonState == LOW)
  {
    Serial.println("High");     // Log that the button is pressed
    digitalWrite(8, HIGH);      // Turn on the LED (apply voltage to pin 8)
  }
  else
  {
    Serial.println("Low");      // Log that the button is not pressed
    digitalWrite(8, LOW);       // Turn off the LED (set pin 8 to 0V)
  }
}
