int analogPin = 3; // potentiometer wiper (middle terminal) connected
									 // to analog pin 3, outside leads to ground and +5V
int val = 0 			 // variable to store the value

void setup () {
	Serial.begin(9600);
}

void loop () {
	val = analogRead(analogPin);	// read the input pin;
	Serial.println(val);					// debug the value
}
