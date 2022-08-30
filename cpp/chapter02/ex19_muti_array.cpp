#include <iostream>
using namespace std;
#define WIDTH 9
#define HEIGHT 3

int main(){
    int table[HEIGHT][WIDTH]; //순서: 높은차원->낮은차원
    int r,c;

    for(r=0; r<HEIGHT; r++){ //높은차원
        for(c=0; c<WIDTH; c++){ //낮은차원
            table[r][c] = (r+1)*(c+1);
        }
    }

    for(r=0; r<HEIGHT; r++){
        for(c=0; c<WIDTH; c++){
            cout << table[r][c] << ", ";
        }
        cout << endl;
    }
    return 0;
}