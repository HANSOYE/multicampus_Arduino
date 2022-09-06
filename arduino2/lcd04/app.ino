#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 in PCF8574 by NXP and Set to 0x3F in PCF8574A by Ti
LiquidCrystal_I2C lcd(0x27, 16, 2);

byte customChar1[] = {
  0x0A,
  0x1E,
  0x0A,
  0x17,
  0x0A,
  0x12,
  0x10,
  0x1F
};

byte customChar2[] = {
  0x04,
  0x0A,
  0x15,
  0x04,
  0x1F,
  0x04,
  0x0A,
  0x04
};

byte customChar3[] = {
  0x1D,
  0x15,
  0x15,
  0x17,
  0x15,
  0x15,
  0x15,
  0x1D
};

byte customChar4[] = {
  0x10,
  0x10,
  0x10,
  0x10,
  0x10,
  0x10,
  0x10,
  0x10
};

byte high_temp[] = {
  0x0C,
  0x0C,
  0x0C,
  0x0C,
  0x0C,
  0x0C,
  0x1E,
  0x1E
};

byte mid_temp[] = {
  0x00,
  0x00,
  0x0C,
  0x0C,
  0x0C,
  0x0C,
  0x1E,
  0x1E
};

byte low_temp[] = {
  0x00,
  0x00,
  0x00,
  0x00,
  0x0C,
  0x0C,
  0x1E,
  0x1E
};
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, customChar1);
  lcd.createChar(1, customChar2);
  lcd.createChar(2, customChar3);
  lcd.createChar(3, customChar4);
  lcd.createChar(5, high_temp);
  lcd.createChar(6, mid_temp);
  lcd.createChar(7, low_temp);
  lcd.home();
  lcd.write(0);
  lcd.write(1);
  lcd.write(2);
  lcd.write(3);
  lcd.write(5);
  lcd.write(6);
  lcd.write(7);

}

void loop() { }