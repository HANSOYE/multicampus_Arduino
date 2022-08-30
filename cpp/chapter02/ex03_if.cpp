#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;

    if(x == 100)
    cout << "x is 100." << endl;

    if(x==100){
        cout << "print x." << endl;
        cout << "x is 100." << endl;
    }

    return 0;
}