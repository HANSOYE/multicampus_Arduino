const int led_pin = 9; // LED ������(PWM �����)

void setup(){
    pinMode(led_pin, OUTPUT); //PWM ��� �� ��� ���� ����
    digitalWrite(led_pin, 0); //LED OFF
}

void loop()
{
    int pwm_val;

    for(pwm_val = 0; pwm_val < 256; pwm_val +=5){
        analogWrite(led_pin, pwm_val); //pwm ��ȣ ���
        delay(100);
    }

    digitalWrite(led_pin, 0); //led off
    delay(2000); //2�� ���
}