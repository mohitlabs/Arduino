const unsigned int led[][3]={
	{3,5,6},
	{9,10,11}
};
unsigned int d=2;
void setColor(const unsigned int,unsigned int,unsigned int,unsigned int);
void pattern0(const unsigned int);
void setup()
{
	setColor(led[0],0,0,0);
	setColor(led[1],0,0,0);
}
void loop()
{
	pattern0(led[0]);
	pattern0(led[1]);
}
void setColor(const unsigned int pin[],unsigned int r_value,unsigned int g_value,unsigned int b_value)
{
	analogWrite(pin[0],255-r_value);
	analogWrite(pin[1],255-g_value);
	analogWrite(pin[2],255-b_value);
}
void pattern0(const unsigned int pin[])
{
	int i;
	for(i=0;i<=255;i++)
	{
		setColor(pin,0,0,i);
		delay(d);
	}
	for(i=0;i<=255;i++)
	{
		setColor(pin,0,i,255);
		delay(d);
	}
	for(i=0;i<=255;i++)
	{
		setColor(pin,0,255,255-i);
		delay(d);
	}
	for(i=0;i<=255;i++)
	{
		setColor(pin,i,255,0);
		delay(d);
	}
	for(i=0;i<=255;i++)
	{
		setColor(pin,255,255,i);
		delay(d);
	}
	for(i=0;i<=255;i++)
	{
		setColor(pin,255,255-i,255);
		delay(d);
	}
	for(i=0;i<=255;i++)
	{
		setColor(pin,255,0,255-i);
		delay(d);
	}
	for(i=0;i<=255;i++)
	{
		setColor(pin,255-i,0,0);
		delay(d);
	}
}