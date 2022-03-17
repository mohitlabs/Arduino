const unsigned int led_pins[3]={9,10,11};
class RGB
{
	private:
		unsigned int r_pin,g_pin,b_pin,d=2;
	public:
		void OP(unsigned int led_pins[])
		{
			r_pin=led_pins[0];
			g_pin=led_pins[1];
			b_pin=led_pins[2];
			pinMode(r_pin,OUTPUT);
			pinMode(g_pin,OUTPUT);
			pinMode(b_pin,OUTPUT);
			setColor(0,0,0);
		}
		void setColor(byte r_value,byte g_value,byte b_value)
		{
			analogWrite(r_pin,r_value);
			analogWrite(g_pin,g_value);
			analogWrite(b_pin,b_value);
		}
		void pattern0()
		{
			int i;
			for(i=0;i<=255;i++)
			{
				this->setColor(0,0,i);
				delay(d);
			}
			for(i=0;i<=255;i++)
			{
				this->setColor(0,i,255);
				delay(d);
			}
			for(i=0;i<=255;i++)
			{
				this->setColor(0,255,255-i);
				delay(d);
			}
			for(i=0;i<=255;i++)
			{
				this->setColor(i,255,0);
				delay(d);
			}
			for(i=0;i<=255;i++)
			{
				this->setColor(255,255,i);
				delay(d);
			}
			for(i=0;i<=255;i++)
			{
				this->setColor(255,255-i,255);
				delay(d);
			}
			for(i=0;i<=255;i++)
			{
				this->setColor(255,0,255-i);
				delay(d);
			}
			for(i=0;i<=255;i++)
			{
				this->setColor(255-i,0,0);
				delay(d);
			}
		}
};
RGB led;
void setup()
{
	led.OP(led_pins);
}
void loop()
{
	led.pattern0();
}
