#include <iostream>
using namespace std;

void swap(int& x, int &y){ //&�� ������ a, b �� ��ü�� �ٲٱ� ������
//swap ���� a,b ���� �ٲ�� �ȴ�
    int t;
    t=x;
    x=y;
    y=t;
}

int main(int argc, char const *argv[]){
    int a= 100, b = 200;

    printf("a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("a=%d, b=%d\n" ,a,b);
    return 0;
}