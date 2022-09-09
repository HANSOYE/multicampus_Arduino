#include <MiniCom.h>

MiniCom com;

int echoPin = 5;
int triggerPin = 6;

void check(){
    //trigger ������ 10����ũ�μ����� �޽��� �߻�
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);

    //echo �� �Է����κ��� �Ÿ��� cm ������ ���
    int distance = pulseIn(echoPin, HIGH) /58;
    com.print(1, "Dist.(cm)=", distance);
}

void setup(){
    com.init();
    com.setInterval(1000, check);
    com.print(0, "[[Distance]]");
    pinMode(echoPin, INPUT);
    pinMode(triggerPin, OUTPUT);
}

void loop(){
    com.run();
}