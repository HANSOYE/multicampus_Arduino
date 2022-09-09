#include <MiniCom.h>
#include <Analog.h>
#include <Button.h>
#include <Servo.h>

MiniCom com;
Analog x(A1, 180, 0); //서버 모터의 각도 조정
Analog y(A0, 255, 0);
Button z(A2);
Servo servo;

void check(){
	int dx, dy;
	boolean sw;

	dx = x.read();
	dy = y.read();
	sw = z.read();

	servo.write(dx);
	char buf[17];
	sprintf(buf, "%d, %d [%d]", dx, dy, sw);
	com.print(1, buf);

}

void setup()
{
	com.init();
    com.setInterval(100, check);
	com.print(0, "[[joystick]]");
	servo.attach(5);
	int angle = x.read();
	servo.write(angle);
}

void loop()
{
	com.run();
}