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


// ������ �����Ʈ ������ �Ǵ����� ����
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
    //lcd.backlight();//�����Ʈ �ѱ�. ���� ��뷮 ������ �� ���� ���� ����. �� ������ �����Ʈ �� ����

    lcd.setCursor(0,0); //Ŀ�� Ȩ(0,0)
    lcd.print("1++++++++23--------45********67########8"); 

    lcd.setCursor(0,1); //Ŀ�� 2�� 1��(0,1)
    lcd.print("1++++++++23--------45********67########8"); 
}

void loop(){
    // put your main code here, to run repeatedly: 
    int n;

    btn.check();
    timer.run();

//���� �ڵ���� delay ������ btn.check(); �� �۵����� ���Ѵ�
    // for(n = 0;n < 80;n++){
    //     lcd.scrollDisplayLeft(); // �������� �� ĭ�� �̵�
    //     delay(500);
    // }

    // delay(4000); // 4�� ���

    // for(n = 0;n < 80;n++){
    //     lcd.scrollDisplayRight(); // ���������� �� ĭ�� �̵�
    //     delay(500);
    // }

    // delay(4000); // 4�� ���

}
