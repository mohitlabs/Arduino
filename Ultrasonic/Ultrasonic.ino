#include "Ultrasonic.h"
Ultrasonic ultrasonic(A0,A1);
int distance;
void setup()
{
	pinMode(13, OUTPUT);
	Serial.begin(9600);
}
void loop()
{
	distance=ultrasonic.Ranging(CM);
	Serial.print("Object found at: ");
	Serial.print(distance);
	Serial.println("cm");
	if(distance<10)
	{
		digitalWrite(13, 1);
	}
	else
	{
		digitalWrite(13, 0);
	}
	delay(1000);
}