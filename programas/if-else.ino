int led = 13;
int cantidadLuz = 300;

void setup () {
	pinMode(led, OUTPUT);
	Serial.begin(9600);
	Serial.println("¡Encendiendo LEDs!");
}

void loop () {
	if (cantidadLuz >= 400) {
		digitalWrite(led, HIGH);
	} else {
		digitalWrite(led, LOW);
	}
	delay(1000);
}
