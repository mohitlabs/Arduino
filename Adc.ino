#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
char adcshow[5];
void setup()
{
	lcd.begin(16,2);
}
void loop()
{
	lcd.setCursor(0,1);
	lcd.print("Adc Result:-");
	String adcvalue=String(analogRead(A0));
	adcvalue.toCharArray(adcshow,5);
	lcd.print(adcshow);
	lcd.print("");
	lcd.setCursor(0,0);
}