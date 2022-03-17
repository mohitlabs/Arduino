#include<LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup()
{
	lcd.begin(16,2);
}
void loop()
{
	lcd.print("White Hat!");
	delay(200);
	lcd.clear();
	delay(200);
}
