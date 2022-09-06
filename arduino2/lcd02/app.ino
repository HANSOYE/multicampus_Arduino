#include <LiquidCrystal_I2C.h>
#include <Button.h>
#include <SimpleTimer.h>

Button btn(3);
SimpleTimer timer;

//set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

//boolean bBacklight = false;

void backlightOff(){
    lcd.noBacklight();
}

void backlightOnOff(){
    timer.setTimeout(3000, backlightOff);


// 누르면 백라이트 켜지고 또누르면 꺼짐
    // bBacklight = !bBacklight;
    
    // if(bBacklight){
    //     lcd.backlight();
    // }else{
    //     lcd.noBacklight();
    // }
    
}

void setup()
{
    btn.setCallback(backlightOnOff);

	lcd.init(); //initialize the lcd
    //lcd.backlight();//백라이트 켜기. 전력 사용량 때문에 안 적을 때도 있음. 안 적으면 백라이트 안 켜짐

    lcd.setCursor(0,0); //커서 홈(0,0)
    lcd.print("1++++++++23--------45********67########8"); 

    lcd.setCursor(0,1); //커서 2행 1열(0,1)
    lcd.print("1++++++++23--------45********67########8"); 
}

void loop(){
    // put your main code here, to run repeatedly: 
    int n;

    btn.check();
    timer.run();

//밑의 코드들은 delay 때문에 btn.check(); 가 작동하지 못한다
    // for(n = 0;n < 80;n++){
    //     lcd.scrollDisplayLeft(); // 왼쪽으로 한 칸씩 이동
    //     delay(500);
    // }

    // delay(4000); // 4초 대기

    // for(n = 0;n < 80;n++){
    //     lcd.scrollDisplayRight(); // 오른쪽으로 한 칸씩 이동
    //     delay(500);
    // }

    // delay(4000); // 4초 대기

}
