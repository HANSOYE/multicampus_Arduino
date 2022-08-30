#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 0;
    for(i=0; i<=10; i++){
        sum+=i;
    }
    cout << i << endl;

    cout << "1부터 10까지 정수의 합 = " << sum << endl;
    return 0;
}