#include <MiniCom.h>
#include <DHT.h>

MiniCom com;
DHT dht11(12, DHT11); //DHT11��ü ����

void check(){
	float fh, fc, ff;

	//DHT �½��� ���� �б�
	fh = dht11.readHumidity(); //���� ����
	fc = dht11.readTemperature(); //���� �µ� ����
	ff = dht11.readTemperature(true); //ȭ�� �µ� ����

	if (isnan(fh) || isnan(fc) || isnan(ff)){ //���� ���нÿ��� ��� ���� ����
		com.print(1, "Failed!!");
		return;
	}
	com.print(1, "t:", fc, " H:", fh);
}

void setup()
{
	com.init();
    com.setInterval(2000, check);
	dht11.begin();
	com.print(0, "[[DHT11]]");
	com.print(1, "Preparing DHT11");
}

void loop()
{
	com.run();
}
