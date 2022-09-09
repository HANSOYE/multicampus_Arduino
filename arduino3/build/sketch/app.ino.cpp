#include <Arduino.h>
#line 1 "c:\\iot\\arduino3\\joy01\\app.ino"
#include <MiniCom.h>
#include <Analog.h>
#include <Button.h>
#include <Servo.h>

MiniCom com;
Analog x(A1, 180, 0); //서버 모터의 각도 조정
Analog y(A0, 255, 0);
Button z(A2);
Servo servo;

#line 12 "c:\\iot\\arduino3\\joy01\\app.ino"
void check();
#line 27 "c:\\iot\\arduino3\\joy01\\app.ino"
void setup();
#line 37 "c:\\iot\\arduino3\\joy01\\app.ino"
void loop();
#line 12 "c:\\iot\\arduino3\\joy01\\app.ino"
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
