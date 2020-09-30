//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.clear();
  lcd.home();
  //lcd.cursor();
  //lcd.blink();
  lcd.setCursor(9,0);
  lcd.print("Preparando para limpeza");
  delay(5000);
  }
void loop()
{
  // Print a message to the LCD.
 lcd.scrollDisplayLeft();
  delay(1250);
  //lcd.setCursor(0,1);
  //lcd.print("Power By ToT");    
}
