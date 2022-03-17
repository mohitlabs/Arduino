const unsigned int relay=13;
const unsigned int sensor=8;
unsigned int value;
void setup()
{
	pinMode(13,OUTPUT);
	pinMode(8,INPUT);
}
void loop()
{
	value=digitalRead(8);
	if(value==LOW)
	{
		digitalWrite(13,LOW);
	}
	else
	{
		digitalWrite(13,HIGH);
	}
	delay(400);
}