#include<pcmConfig.h>
#include<pcmRF.h>
#include<TMRpcm.h>
TMRpcm tmrpcm;
const unsigned int SPK=10,CS=4;
const unsigned int push_button[]={0,1,2};
const unsigned int led[][3]={
	{3,5,6},
	{7,8,9},
	{A0,A1,A2}
};
unsigned int led_state[]={00,00};
unsigned int match=0,len=0,d=1;
void setColor(const unsigned int,unsigned int,unsigned int,unsigned int);
void pattern0(const unsigned int);
void read_buttons(void);
unsigned int OtoD(unsigned int);
void setup()
{
	int i,j;
	len=sizeof(push_button)/sizeof(push_button[0]);
	for(i=0;i<len;i++)
	{
		pinMode(push_button[i],INPUT);
		for(j=0;j<3;j++)
		{
			pinMode(led[i][j],OUTPUT);
		}
	}
	for(i=0;i<len;i++)
	{
		digitalWrite(push_button[i],HIGH);
		setColor(led[i],0,0,0);
	}
	tmrpcm.speakerPin=SPK;
	Serial.begin(9600);
	if(!SD.begin(CS))
	{
		Serial.println("SD Fail!");
		return;
	}
	tmrpcm.setVolume(5);
}
void loop()
{
	read_buttons();
	if(digitalRead(push_button[0])==LOW)
	{
		delay(50);
		while(digitalRead(push_button[0])==LOW);
		match=OtoD(led_state);
		switch(match)
		{
			case 0:tmrpcm.play("WAV/0.wav");break;
			case 1:tmrpcm.play("WAV/1.wav");break;
			case 2:tmrpcm.play("WAV/2.wav");break;
			case 3:tmrpcm.play("WAV/3.wav");break;
			case 4:tmrpcm.play("WAV/4.wav");break;
			case 5:tmrpcm.play("WAV/5.wav");break;
			case 6:tmrpcm.play("WAV/6.wav");break;
			case 7:tmrpcm.play("WAV/7.wav");break;
			case 8:tmrpcm.play("WAV/8.wav");break;
			case 9:tmrpcm.play("WAV/9.wav");break;
			case 10:tmrpcm.play("WAV/10.wav");break;
			case 11:tmrpcm.play("WAV/11.wav");break;
			case 12:tmrpcm.play("WAV/12.wav");break;
			case 13:tmrpcm.play("WAV/13.wav");break;
			case 14:tmrpcm.play("WAV/14.wav");break;
			case 15:tmrpcm.play("WAV/15.wav");break;
			case 16:tmrpcm.play("WAV/16.wav");break;
			case 17:tmrpcm.play("WAV/17.wav");break;
			case 18:tmrpcm.play("WAV/18.wav");break;
			case 19:tmrpcm.play("WAV/19.wav");break;
			case 20:tmrpcm.play("WAV/20.wav");break;
			case 21:tmrpcm.play("WAV/21.wav");break;
			case 22:tmrpcm.play("WAV/22.wav");break;
			case 23:tmrpcm.play("WAV/23.wav");break;
			case 24:tmrpcm.play("WAV/24.wav");break;
			case 25:tmrpcm.play("WAV/25.wav");break;
			case 26:tmrpcm.play("WAV/26.wav");break;
			case 27:tmrpcm.play("WAV/27.wav");break;
			case 28:tmrpcm.play("WAV/28.wav");break;
			case 29:tmrpcm.play("WAV/29.wav");break;
			case 30:tmrpcm.play("WAV/30.wav");break;
			case 31:tmrpcm.play("WAV/31.wav");break;
			case 32:tmrpcm.play("WAV/32.wav");break;
			case 33:tmrpcm.play("WAV/33.wav");break;
			case 34:tmrpcm.play("WAV/34.wav");break;
			case 35:tmrpcm.play("WAV/35.wav");break;
			case 36:tmrpcm.play("WAV/36.wav");break;
			case 37:tmrpcm.play("WAV/37.wav");break;
			case 38:tmrpcm.play("WAV/38.wav");break;
			case 39:tmrpcm.play("WAV/39.wav");break;
			case 40:tmrpcm.play("WAV/40.wav");break;
			case 41:tmrpcm.play("WAV/41.wav");break;
			case 42:tmrpcm.play("WAV/42.wav");break;
			case 43:tmrpcm.play("WAV/43.wav");break;
			case 44:tmrpcm.play("WAV/44.wav");break;
			case 45:tmrpcm.play("WAV/45.wav");break;
			case 46:tmrpcm.play("WAV/46.wav");break;
			case 47:tmrpcm.play("WAV/47.wav");break;
			case 48:tmrpcm.play("WAV/48.wav");break;
			case 49:tmrpcm.play("WAV/49.wav");break;
			case 50:tmrpcm.play("WAV/50.wav");break;
			case 51:tmrpcm.play("WAV/51.wav");break;
			case 52:tmrpcm.play("WAV/52.wav");break;
			case 53:tmrpcm.play("WAV/53.wav");break;
			case 54:tmrpcm.play("WAV/54.wav");break;
			case 55:tmrpcm.play("WAV/55.wav");break;
			case 56:tmrpcm.play("WAV/56.wav");break;
			case 57:tmrpcm.play("WAV/57.wav");break;
			case 58:tmrpcm.play("WAV/58.wav");break;
			case 59:tmrpcm.play("WAV/59.wav");break;
			case 60:tmrpcm.play("WAV/60.wav");break;
			case 61:tmrpcm.play("WAV/61.wav");break;
			case 62:tmrpcm.play("WAV/62.wav");break;
			case 63:tmrpcm.play("WAV/63.wav");break;
			default:break;
		}
		pattern0(led[0]);
		delay(1000);
	}
}
void setColor(const unsigned int pin[],unsigned int b_value,unsigned int g_value,unsigned int r_value)
{
	analogWrite(pin[0],r_value);
	analogWrite(pin[1],g_value);
	analogWrite(pin[2],b_value);
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
void read_buttons()
{
	int i;
	for(i=1;i<len;i++)
	{
		if(digitalRead(push_button[i])==LOW)
		{
			delay(50);
			while(digitalRead(push_button[i])==LOW);
			switch(led_state[i-1])
			{
				case 00:
					setColor(led[i],0,0,255);
					led_state[i-1]=01;
					break;
				case 01:
					setColor(led[i],0,255,0);
					led_state[i-1]=02;
					break;
				case 02:
					setColor(led[i],0,255,255);
					led_state[i-1]=03;
					break;
				case 03:
					setColor(led[i],255,0,0);
					led_state[i-1]=04;
					break;
				case 04:
					setColor(led[i],255,0,255);
					led_state[i-1]=05;
					break;
				case 05:
					setColor(led[i],255,255,0);
					led_state[i-1]=06;
					break;
				case 06:
					setColor(led[i],255,255,255);
					led_state[i-1]=07;
					break;
				case 07:
					setColor(led[i],0,0,0);
					led_state[i-1]=00;
					break;
			}
		}
	}
}
unsigned int OtoD(unsigned int octal[])
{
	unsigned int i,decimal=0;
	for(i=0;i<len-1;i++)
	{
		switch(octal[(len-2)-i])
		{
			case 00:
				decimal=decimal*8+0;
				break;
			case 01:
				decimal=decimal*8+1;
				break;
			case 02:
				decimal=decimal*8+2;
				break;
			case 03:
				decimal=decimal*8+3;
				break;
			case 04:
				decimal=decimal*8+4;
				break;
			case 05:
				decimal=decimal*8+5;
				break;
			case 06:
				decimal=decimal*8+6;
				break;
			case 07:
				decimal=decimal*8+7;
				break;
		}
	}
	return(decimal);
}