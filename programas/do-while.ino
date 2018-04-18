int led = 13;
int cantidadLuz = 300;

void setup () {
	pinMode(led, OUTPUT);
	Serial.begin(9600);
	Serial.println("¡Encenciendo LEDs!");
}

void loop () {
	do {
		digitalWrite(led, HIGH);
		cantidadLUZ -= 10;
	} while (cantidaLuz >= 100);
	delay(1000)
}
