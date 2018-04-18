int timer = 100 // the higher the number, the slower the timer

void setup () {
	// use a for loop to intialize eaxh pin as an output
	for (int thisPin = 2; thisPin < 8; thisPin++) {
		pinMode(thisPin, OUTPUT);
	}
}

void loop () {
	// loop from the lowet pin to the highest
	for (int thisPint = 2; thisPin < 8; thisPin++) {
		// turn the pin on
		digitalWrite(thisPin, HIGH);
		delay(timer);
		digitalWrite(thisPin, LOW );
	}
	// loop from the highest pin to the lowest
	for (int thisPint = 8; thisPin > 2; thisPin--) {
		// turn the pin on
		digitalWrite(thisPin, HIGH);
		delay(timer);
		digitalWrite(thisPin, LOW );
	}

}
