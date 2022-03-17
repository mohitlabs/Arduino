#define swforward 9
#define swleft 8
#define swright 7
#define swbackward 6
#define motor1 5
#define motor2 4
#define motor3 3
#define motor4 2
unsigned long int motor[][4]={
	{0,1,1,0},
	{0,1,0,0},
	{0,0,1,0},
	{1,0,0,1}						
};
void setup()
{
	pinMode(swforward, INPUT);
	pinMode(swleft, INPUT);
	pinMode(swright, INPUT);
	pinMode(swbackward, INPUT);
	pinMode(motor2, OUTPUT);
	pinMode(motor2, OUTPUT);
	pinMode(motor3, OUTPUT);
	pinMode(motor4, OUTPUT);
}
void loop()
{
	int forward,left,right,backward;
	forward=digitalRead(swforward);
	left=digitalRead(swleft);
	right=digitalRead(swright);
	backward=digitalRead(swbackward);
	while(forward==0||left==0||right==0||backward==0)
	{
		if(forward==0)
		{
			digitalWrite(5, motor[0][0]);
			digitalWrite(4, motor[0][1]);
			digitalWrite(3, motor[0][2]);
			digitalWrite(2, motor[0][3]);
		}
		if(left==0)
		{
			digitalWrite(5, motor[1][0]);
			digitalWrite(4, motor[1][1]);
			digitalWrite(3, motor[1][2]);
			digitalWrite(2, motor[1][3]);
		}
		if(right==0)
		{
			digitalWrite(5, motor[2][0]);
			digitalWrite(4, motor[2][1]);
			digitalWrite(3, motor[2][2]);
			digitalWrite(2, motor[2][3]);
		}
		if(backward==0)
		{
			digitalWrite(5, motor[3][0]);
			digitalWrite(4, motor[3][1]);
			digitalWrite(3, motor[3][2]);
			digitalWrite(2, motor[3][3]);
		}
	}
}