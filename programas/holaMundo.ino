int led = 13;

void setup () {
	pinMode(led, OUTPUT);
	Serial.begin(9600); // bps
	Serial.println("¡Hola Mundo!");
}

void loop {
	digitalWrite(led, HIGH);
	delay(1000); // 1 s, goes in ms
	digitalWrite(led, LOW);
	delay(500); // 0.5 s
}

