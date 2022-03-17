const unsigned int led[]={3,4,5,6,7},sen=2;
unsigned int len=0;
void A(void);
void B(void);
void C(void);
void D(void);
void E(void);
void f(void);
void G(void);
void H(void);
void I(void);
void J(void);
void K(void);
void L(void);
void M(void);
void N(void);
void O(void);
void P(void);
void Q(void);
void R(void);
void S(void);
void T(void);
void U(void);
void V(void);
void W(void);
void X(void);
void Y(void);
void Z(void);
void signal(bool,bool,bool,bool,bool);
void setup()
{
	unsigned int i;
	len=sizeof(led)/sizeof(led[0]);
	for(i=0;i<len;i++)
	{
		pinMode(led[i],OUTPUT);
	}
	pinMode(sen,INPUT);
	for(i=0;i<len;i++)
	{
		digitalWrite(led[i],HIGH);
	}
}
void loop()
{
	if(digitalRead(sen)==HIGH)
	{
		H();Sp();
		E();Sp();
		L();Sp();
		L();Sp();
		O();Sp();
	}
}
void Sp()
{
	signal(0,0,0,0,0);
	signal(0,0,0,0,0);
	signal(0,0,0,0,0);
	signal(0,0,0,0,0);
	signal(0,0,0,0,0);
}
void A()
{
	signal(1,1,1,1,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
	signal(1,1,1,1,1);
}
void B()
{
	signal(1,1,1,1,1);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
	signal(0,1,1,1,0);  
}
void C()
{
	signal(0,1,1,1,0);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
}
void D()
{
	signal(1,1,1,1,1);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
	signal(0,1,1,1,0);
}
void E()
{
	signal(1,1,1,1,1);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
}
void f()
{
	signal(1,1,1,1,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
}
void G()
{
	signal(0,1,1,1,0);
	signal(1,0,0,0,1);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
	signal(1,1,0,0,1);
}
void H()
{
	signal(1,1,1,1,1);
	signal(0,0,1,0,0);
	signal(0,0,1,0,0);
	signal(0,0,1,0,0);
	signal(1,1,1,1,1);
}
void I()
{
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
	signal(1,1,1,1,1);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
}
void J()
{
	signal(0,1,0,0,1);
	signal(1,0,0,0,1);
	signal(0,1,1,1,1);
	signal(0,0,0,0,1);
	signal(0,0,0,0,1);    
}
void K()
{
	signal(1,1,1,1,1);
	signal(0,1,1,0,0);
	signal(0,1,1,0,0);
	signal(0,1,0,1,0);
	signal(1,0,0,0,1);
}
void L()
{
	signal(1,1,1,1,1);
	signal(1,0,0,0,0);
	signal(1,0,0,0,0);
	signal(1,0,0,0,0);
	signal(1,0,0,0,0);
}
void M()
{
	signal(1,1,1,1,1);
	signal(0,0,0,0,1);
	signal(0,0,1,1,0);
	signal(0,0,0,0,1);
	signal(1,1,1,1,1);
}
void N()
{
	signal(1,1,1,1,1);
	signal(0,0,0,1,0);
	signal(0,0,1,0,0);
	signal(0,1,0,0,0);
	signal(1,1,1,1,1);
}
void O()
{
	signal(0,1,1,1,0);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
	signal(1,0,0,0,1);
	signal(0,1,1,1,0);
}
void P()
{
	signal(1,1,1,1,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
	signal(0,0,0,1,0);
}
void Q()
{
	signal(0,1,1,1,0);
	signal(1,0,0,0,1);
	signal(1,1,1,0,1);
	signal(1,0,1,0,1);
	signal(0,1,1,1,0);
}
void R()
{
	signal(1,1,1,1,1);
	signal(0,0,1,0,1);
	signal(0,0,1,0,1);
	signal(0,1,1,0,1);
	signal(1,0,0,1,0);
}
void S()
{
	signal(1,0,0,1,0);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
	signal(1,0,1,0,1);
	signal(0,1,0,0,1);
}
void T()
{
	signal(0,0,0,0,1);
	signal(0,0,0,0,1);
	signal(1,1,1,1,1);
	signal(0,0,0,0,1);
	signal(0,0,0,0,1);
}
void U()
{
	signal(0,1,1,1,1);
	signal(1,0,0,0,0);
	signal(1,0,0,0,0);
	signal(1,0,0,0,0);
	signal(0,1,1,1,1);
}
void V()
{
	signal(0,0,1,1,1);
	signal(0,1,0,0,0);
	signal(1,0,0,0,0);
	signal(0,1,0,0,0);
	signal(0,0,1,1,1);
}  
void W()
{
	signal(1,1,1,1,1);
	signal(0,1,0,0,0);
	signal(0,0,1,0,0);
	signal(0,1,0,0,0);
	signal(1,1,1,1,1);
}
void X()
{
	signal(1,0,0,0,1);
	signal(0,1,0,1,0);
	signal(0,0,1,0,0);
	signal(0,1,0,1,0);
	signal(1,0,0,0,1);
}
void Y()
{
	signal(0,0,0,0,1);
	signal(0,0,0,1,0);
	signal(1,1,1,0,0);
	signal(0,0,0,1,0);
	signal(0,0,0,0,1);
}
void Z()
{
	signal(1,0,0,0,1);
	signal(1,1,0,0,1);
	signal(1,0,1,0,1);
	signal(1,0,0,1,1);
	signal(1,0,0,0,1);
}
void signal(bool a,bool b,bool c,bool d,bool e)
{
	if(a==1)
	{
		digitalWrite(led[0],LOW);
	}
	else
	{
		digitalWrite(led[0],HIGH);
	}
	if(b==1)
	{
		digitalWrite(led[1],LOW);
	}
	else
	{
		digitalWrite(led[1],HIGH);
	}
	if(c==1)
	{
		digitalWrite(led[2],LOW);
	}
	else
	{
		digitalWrite(led[2],HIGH);
	}
	if(d==1)
	{
		digitalWrite(led[3],LOW);
	}
	else
	{
		digitalWrite(led[3],HIGH);
	}
	if(e==1)
	{
		digitalWrite(led[4],LOW);
	}
	else
	{
		digitalWrite(led[4],HIGH);
	}
	delay(1);
}