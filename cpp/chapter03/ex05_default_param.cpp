#include <iostream>
using namespace std;

void display(char c = '*', int n =10){
    for(int i = 0; i<n; i++){
        cout << c;
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    display();
    display('#');
    display('#', 5);
    //display(5); 첫번째 인수를 주지 않으면 안 된다.
    return 0;
}