#include <Led.h>

Led led(3);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
    led.toggle();
    delay(200);
	Serial.println("toggle");
}
