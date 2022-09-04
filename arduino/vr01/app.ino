#include <Led.h>

const int var_pin = A0;
int alnalog_val;

void setup()
{
	Serial.begin(115200);
}

void loop()
{
    int digital_val;
    float ff;

    digital_val = analogRead(var_pin); //�Ƴ��α� �� ������ ��ȯ //�Ƴ��α� ����� 0~1023�� ����
    ff = (float)digital_val / 1023. * 5.0; //���а� ���

    Serial.println("Input Voltage(0~5V) = ");
    Serial.println(ff); //�Է� ���а� ���(0~5V)

    Serial.println("Digital Value(0~1023) = ");
    Serial.println(digital_val); //��ȯ�� ������ �� ���(0~1023)
    Serial.println("===========================================");

    delay(2000);
}
