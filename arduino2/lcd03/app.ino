//lcd 첫줄에 가변저항의 값을 읽어서 출력하기

#include <LiquidCrystal_I2C.h>
#include <Button.h>
#include <SimpleTimer.h>
#include <Analog.h>


//set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
SimpleTimer timer;
Analog sensor(A0, 1023, 0);

void check(){
    int value = sensor.read();
    char buf[5];
    sprintf(buf, "%-4d", value);

    lcd.setCursor(0, 0);
    lcd.print(value);
}

void setup(){
    lcd.init();
    lcd.backlight();
    timer.setInterval(100, check);
}

void loop(){
    timer.run();
}