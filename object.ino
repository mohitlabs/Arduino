int x;
void setup()
{
	pinMode(13,OUTPUT);
	Serial.begin(9600);
}
void loop()
{
	x=analogRead(A0);
	if(x>700)
	{
		Serial.println("Object found");
	}
	else
	{
		Serial.println("Searching");
	}
	delay(100);
}
