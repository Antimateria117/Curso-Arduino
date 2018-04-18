void setup () {
	Serial.begin(9600);
}

void loop () {
	int i = 2;
	int j = 3;
	int k;

	k = myMultiplicationFunction(i, j); 
	// k now contains 6
	Serial.println(k);
	Serial.println(i);

	delay(100);
}

int myMultiplicationFunction (int i, int j) {
	int result;
	result = i * j;
	i = 25;
	return result;
}
