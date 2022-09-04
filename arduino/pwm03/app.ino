#include <PWMLed.h>

const int var_pin = A0; //�������� ������ A0�� ����
PWMLed led(9); //led�� 9�� �ɿ� ����

void setup(){

}

void loop(){
    int analog_val, pwm_val;

    analog_val = analogRead(var_pin); //�������� ���а� ���� 0~1023 ��
    pwm_val = map(analog_val, 0, 1023, 255,0); //0~1023 ���� 255~0������ �ٲ�
    
    led.setValue(pwm_val);
}