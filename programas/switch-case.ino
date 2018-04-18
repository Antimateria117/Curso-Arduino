int led = 13;
int cantidadLuz = 300;

void setup () {
	pinMode(led, OUTPUT);
	Serial.begin(9600);
	Serial.println("¡Encendiendo LEDs!");
}

void loop () {
	switch (cantidadLuz) {
		case 200:
			digitalWrite(led, LOW);
			break;
		case 250:
		case 300:
			digitalWrite(led, HIGH);
			break;
		default:
			digitalWrite(led, HIGH);
			break;
	}
	delay(1000);
}
