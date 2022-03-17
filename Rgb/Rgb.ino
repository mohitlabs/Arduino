const unsigned int pin[]={A0,A1,A2,A3,A4,A5};
class Led
{
	private:
		const unsigned int r_pin,g_pin,b_pin;
		unsigned int r_value=0,g_value=0,b_value=0;
	public:
		Led(const unsigned int r_pin,const unsigned int g_pin,const unsigned int b_pin)
		{
			this->r_pin=r_pin;
			this->g_pin=g_pin;
			this->b_pin=b_pin;
			pinMode(this->r_pin,OUTPUT);
			pinMode(this->g_pin,OUTPUT);
			pinMode(this->b_pin,OUTPUT);
		}
		void setColor(unsigned int r_value,unsigned int g_value,unsigned int b_value)
		{
			this->r_value=r_value;
			this->g_value=g_value;
			this->b_value=b_value;
			analogWrite(this->r_pin,this->r_value);
			analogWrite(this->g_pin,this->g_value);
			analogWrite(this->b_pin,this->b_value);
		}
};
void setup()
{
	Led l1(A0,A1,A2);
	Led l2(A3,A4,A5);
}
void loop()
{
	Led l1,l2;
	l1.setColor(0,0,0);
	l2.setColor(0,0,0);
	delay(500);
	l1.setColor(0,0,0);
	l2.setColor(0,0,0);
	delay(500);
	l1.setColor(0,0,0);
	l2.setColor(0,0,0);
	delay(500);
	l1.setColor(0,0,0);
	l2.setColor(0,0,0);
	delay(500);
}