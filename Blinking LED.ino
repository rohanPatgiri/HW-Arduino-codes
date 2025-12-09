// Define the pin where the LED is connected
const int ledPin = 13;

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on (HIGH voltage level)
  delay(1000);                 // Wait for 1000 milliseconds (1 second)
  digitalWrite(ledPin, LOW);   // Turn the LED off (LOW voltage level)
  delay(1000);                 // Wait for 1 second
}
