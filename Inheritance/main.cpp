#include <iostream>


using namespace std;

#include "Isosceles.h"
int main() {

    int base, height, equalSide;

    cout << "Please type in a base length: ";
    cin >> base;
    cout << "Please type in the height: ";
    cin >> height;
    cout << "Please type in the side that is equal: ";
    cin >> equalSide;


    Isosceles myTriangle(base, equalSide,  height);
    myTriangle.printInfo();

    return 0;
}