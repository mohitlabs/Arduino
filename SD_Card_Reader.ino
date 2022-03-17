#include<SD.h>
#include<SPI.h>
#include<pcmConfig.h>
#include<pcmRF.h>
#include<TMRpcm.h>
TMRpcm tmrpcm;
const unsigned int SPK=10,CS=4;
void setup()
{
	tmrpcm.speakerPin=SPK;
	Serial.begin(9600);
	if(!SD.begin(CS))
	{
		Serial.println("SD Fail!");
		return;
	}
	tmrpcm.setVolume(5);
	tmrpcm.play("WAV/0.wav");
}
void loop()
{
}
