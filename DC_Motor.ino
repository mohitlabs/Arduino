unsigned long int pattern[][4]={
	{1,0,1,0},
	{0,0,0,0},
	{0,1,0,1},
	{0,0,0,0},
	{1,0,0,1},
	{0,0,0,0},
	{0,1,1,0},
	{0,0,0,0}
};
void setup()
{
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(2, OUTPUT);
}
void loop()
{
	unsigned int count;
	if(count>=7)
	{
		count=0;
	}
	for(count=0;count<7;count++)
	{
		digitalWrite(5, pattern[count][4]);
		digitalWrite(4, pattern[count][5]);
		digitalWrite(3, pattern[count][6]);
		digitalWrite(2, pattern[count][7]);
		delay(800);
	}
}	