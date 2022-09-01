#include <iostream>
using namespace std;

void swap(int& x, int &y){ //&을 넣으면 a, b 값 자체를 바꾸기 때문에
//swap 후의 a,b 값도 바뀌게 된다
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