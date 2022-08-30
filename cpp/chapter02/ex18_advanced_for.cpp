#include <iostream>
using namespace std;

int main(){
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for(int i : list){
        sum += i;
    }

    cout << sum << endl << endl;

    for(int& i : list) {
        cout << i*10 << " ";
    }

    cout << endl;

    for(auto&i:list){
        i = i*10;
    }

    for(auto& i : list) {
        cout << i << " ";
    }
    return 0;
}