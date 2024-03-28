#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize lcd screen
  lcd.init();
  // Turn on the backlight
  lcd.backlight();
}

void loop() {
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("");
  lcd.setCursor(0, 1);
  lcd.print("Arduino_uno_guy");
}
