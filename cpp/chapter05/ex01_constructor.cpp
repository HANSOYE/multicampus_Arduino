#include <iostream>
using namespace std;

class Time{
    public:
    int hour;
    int minute;

    //������
    Time();
    Time(int, int); //�Ű����� �̸� �߿�x -> h, m ���� ����

    void print();
};

Time::Time(){
    hour = 0;
    minute = 0;
}

Time::Time(int hour, int minute): hour(hour), minute(minute){ //�������(��������)
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