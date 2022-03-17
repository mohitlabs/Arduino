const int button=12,led=13;
int logic_state=0;
void setup()
{
	pinMode(button, INPUT);
	pinMode(led, OUTPUT);
}
void loop()
{
	logic_state=digitalRead(button);
	if(logic_state==1)
	{
		digitalWrite(led, 0);
	}
	else
	{
		digitalWrite(led, 1);
	}
}