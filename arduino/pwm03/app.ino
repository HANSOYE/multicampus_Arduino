#include <PWMLed.h>

const int var_pin = A0; //가변저항 연결핀 A0에 꽂음
PWMLed led(9); //led는 9번 핀에 꽂음

void setup(){

}

void loop(){
    int analog_val, pwm_val;

    analog_val = analogRead(var_pin); //가변저항 전압값 읽음 0~1023 값
    pwm_val = map(analog_val, 0, 1023, 255,0); //0~1023 값을 255~0값으로 바꿈
    
    led.setValue(pwm_val);
}