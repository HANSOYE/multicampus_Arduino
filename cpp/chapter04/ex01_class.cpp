#include <iostream>
#include <string>
using namespace std;

class Circle{
    public:
    int radius;
    string color;

    double calcArea(){
        return 3.14 * radius * radius;
    }
};