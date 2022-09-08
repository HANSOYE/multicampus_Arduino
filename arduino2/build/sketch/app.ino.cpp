#include <Arduino.h>
#line 1 "c:\\iot\\arduino2\\buzzer01\\app.ino"
#define NOTE_C4 262 // 4��Ÿ�� ��
#define NOTE_D4 294 // 4��Ÿ�� ��
#define NOTE_E4 330 // 4��Ÿ�� ��
#define NOTE_G4 392 // 4��Ÿ�� ��
#define NOTE_A4 440 // 4��Ÿ�� ��
#define NOTE_C5 523 // 5��Ÿ�� ��

#define NUM 49

int melody[NUM] = { // �� ������
    NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, // ����������
    NOTE_E4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_C4, // �̵ֹּ̼�
    NOTE_G4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_E4, // �ֹֹּּ̼�
    NOTE_C4, NOTE_C4, NOTE_C4, // ������
    NOTE_G4, NOTE_G4, NOTE_E4, NOTE_C4, // �̵ֹּ�
    NOTE_G4, NOTE_G4, NOTE_G4, // �ּּ�
    NOTE_G4, NOTE_G4, NOTE_E4, NOTE_C4, // �̵ֹּ�
    NOTE_G4, NOTE_G4, NOTE_G4, 
    NOTE_G4, NOTE_G4, NOTE_E4, NOTE_C4, // �̵ֹּ�
    NOTE_G4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, // �ֶּּ��
    NOTE_C5, NOTE_G4, NOTE_C5, NOTE_G4, // ���ֵ���
    NOTE_E4, NOTE_D4, NOTE_C4 // �̷���
}; 

// ��ǥ ����
int noteDuration[NUM] ={
    4, 8, 8, 4, 4, 4, 8, 8, 4, 4, 8, 8, 4, 8, 8, 4, 4, 4, 2, 
    4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2, 
    4, 4, 4, 4, 8, 8, 8, 8, 2, 4, 4, 4, 4, 4, 4, 2
};


const int speaker_pin = 9;

#line 35 "c:\\iot\\arduino2\\buzzer01\\app.ino"
void setup();
#line 40 "c:\\iot\\arduino2\\buzzer01\\app.ino"
void loop();
#line 35 "c:\\iot\\arduino2\\buzzer01\\app.ino"
void setup()
{
    pinMode(speaker_pin, OUTPUT);
}

void loop(){
    int m, d, dd;

    for(m=0; m<NUM; m++){
        d = 1000 / noteDuration[m];
        dd = d*1.3; //�� ��� �ð�(4�� ��ǥ 325ms)

        tone(speaker_pin, melody[m], d);
        delay(dd);
    }
    delay(1000);
}
