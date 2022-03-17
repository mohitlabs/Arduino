unsigned long int pattern[][8]={
	{0,0,0,0,0,0,1,1},
	{1,0,0,1,1,1,1,1},
	{0,0,1,0,0,1,0,1},
	{0,0,0,0,1,1,0,1},
	{1,0,0,1,1,0,0,1},
	{0,1,0,0,1,0,0,1},
	{0,1,0,0,0,0,0,1},
	{0,0,0,1,1,1,1,1},
	{0,0,0,0,0,0,0,1},
	{0,0,0,0,1,0,0,1}
};
void setup()
{
	pinMode(9, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(2, OUTPUT);
}
void loop()
{
	unsigned int count;
	if(count>=10)
	{
		count=0;
	}
	for(count=0;count<10;count++)
	{
		digitalWrite(9, pattern[count][0]);
		digitalWrite(8, pattern[count][1]);
		digitalWrite(7, pattern[count][2]);
		digitalWrite(6, pattern[count][3]);
		digitalWrite(5, pattern[count][4]);
		digitalWrite(4, pattern[count][5]);
		digitalWrite(3, pattern[count][6]);
		digitalWrite(2, pattern[count][7]);
		delay(500);
	}
}