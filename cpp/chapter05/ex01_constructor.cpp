#include <iostream>
using namespace std;

class Time{
    public:
    int hour;
    int minute;

    //생성자
    Time();
    Time(int, int); //매개변수 이름 중요x -> h, m 생략 가능

    void print();
};

Time::Time(){
    hour = 0;
    minute = 0;
}

Time::Time(int hour, int minute): hour(hour), minute(minute){ //멤버변수(지역변수)
    // this->hour = hour;
    // this->minute = minute;
}

void Time::print(){
    cout << hour << ":" << minute << endl;
}

int main(){
    //Time a;
    Time b{10, 25};
    Time c{10, 25};
    Time d={10, 25};

    b.print();
    c.print();
    d.print();

    return 0;
}