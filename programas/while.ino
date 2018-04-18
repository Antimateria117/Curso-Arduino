int led = 13;
int cantidadLuz = 300;

void setup () {
	pinMode(led, OUTPUT);
	Serial.begin(9600);
	Serial.println("¡Encenciendo LEDs!");
}

void loop () {
	while (cantidaLuz >= 100) {
		digitalWrite(led, HIGH);
		cantidadLUZ -= 10;
	}
	delay(1000)
}
