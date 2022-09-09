#include <MiniCom.h>

MiniCom com;

void setup()
{
	com.init();
    com.setInterval(100, check());
}

void loop()
{
	com.run();
}