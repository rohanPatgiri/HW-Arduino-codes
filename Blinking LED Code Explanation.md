
## Line 1-2: Variable Declaration

const int ledPin = 13;
This line creates a constant integer variable named ledPin and assigns it the value 13. This tells the Arduino that your LED is connected to digital pin 13. Using const means this 
value cannot be changed later in the program, which prevents accidental modifications
..........

## Line 4-7: Setup Function

void setup() {
  pinMode(ledPin, OUTPUT);
}

The setup() function runs only once when the Arduino starts up or is reset. Inside this function, pinMode(ledPin, OUTPUT); configures pin 13 as an OUTPUT pin. An OUTPUT pin can send electrical voltage (5V when HIGH, 0V when LOW) to connected components 
like LEDs. Without this declaration, the pin wouldn't be able to control the LED properly.

..........

## Line 9-15: Loop Function



void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

The loop() function runs repeatedly in an endless cycle after setup() completes. Here's what each line does:​

digitalWrite(ledPin, HIGH); - Sets pin 13 to HIGH, which outputs 5 volts and turns the LED on​

delay(1000); - Pauses the program for 1000 milliseconds (1 second), keeping the LED on during this time​

digitalWrite(ledPin, LOW); - Sets pin 13 to LOW (0 volts), turning the LED off​

delay(1000); - Pauses for another 1 second with the LED off. Without this second delay, the LED would turn back on instantly and you wouldn't see it blink​

After the last line executes, the program automatically jumps back to the beginning of loop() and repeats the entire sequence, creating the blinking effect.
