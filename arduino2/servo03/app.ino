#include <Analog.h>
#include <Servo.h>
#include <Button.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Button btn(3);
Servo myServo;

int b_open = false;
const int servo_pin = 5;

void open(){
    b_open = true;
    myServo.write(90);
    lcd.setCursor(0,0);
    lcd.print("open ");
}

void close(){
    b_open = false;
    myServo.write(0);

    lcd.setCursor(0,0);
    lcd.print("close");
}

void check(){
    if(!b_open) open();
    else close();
}

void setup(){

    lcd.init();
    lcd.backlight();
    lcd.clear();
    btn.setCallback(check);
    myServo.attach(servo_pin);
    close();
}

void loop(){
    btn.check();
}