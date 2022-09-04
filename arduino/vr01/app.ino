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

    digital_val = analogRead(var_pin); //아날로그 값 디지털 변환 //아날로그 리드는 0~1023값 읽음
    ff = (float)digital_val / 1023. * 5.0; //전압값 계산

    Serial.println("Input Voltage(0~5V) = ");
    Serial.println(ff); //입력 전압값 출력(0~5V)

    Serial.println("Digital Value(0~1023) = ");
    Serial.println(digital_val); //변환된 디지털 값 출력(0~1023)
    Serial.println("===========================================");

    delay(2000);
}
