void setup()
{
	pinMode(7,INPUT);
	pinMode(6,OUTPUT);
	digitalWrite(6,LOW);
}
void loop()
{
	if(digitalRead(7))
	{
		digitalWrite(6,HIGH);
	}
	else
	{
		digitalWrite(6,LOW);
	}
}