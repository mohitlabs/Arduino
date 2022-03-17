const int swPin=9;
void setup()
{
	Serial.begin(9600);
	pinMode(swPin, INPUT);
}
void loop()
{
	if(digitalRead(swPin))
	{
		Serial.write('M');
		delay(1000);
	}
	else
	{
		Serial.write('0');
		delay(200);
	}
}
