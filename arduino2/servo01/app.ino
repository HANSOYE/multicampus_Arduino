#include <Servo.h>

Servo myServo; // ����� ���� ���͸� ����
const int servo_pin = 5; //���� ���� ������

void setup(){
    myServo.attach(servo_pin); //����� ������ �� �Ҵ�
}

void move_angle(int angle, int delay_time){
    myServo.write(angle);
    delay(delay_time);
}

void loop(){
    move_angle(0, 1000);
    move_angle(90, 1000);
    move_angle(180, 1000);
    move_angle(90, 1000);
}