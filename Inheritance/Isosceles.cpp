//
// Created by Eier on 12/30/2017.
//

#include "Isosceles.h"

using namespace std;

//Constructor


//Constructor with parameters

//To set the Height of this Class in the Triangle Class we have to use the Constructor/overlord function in Triangle.

Isosceles::Isosceles(int Base, int SideOne, int Heigth) :
Triangle(Heigth){
    base = Base;
    sideOne = SideOne;

}

void Isosceles::setBase(int Base){
    base = Base;
}

void Isosceles::setSideOne(int SideOne) {
    sideOne = SideOne;
}

int Isosceles::getBase() {
    return base;
}

int Isosceles::getSideOne() {
    return sideOne;
}

int Isosceles::getPerimeter() {
    return ((2 * sideOne) + base);

}

void Isosceles::printInfo() {
    cout << endl << "Perimeter: " << getPerimeter() << endl;
    cout << "Area: " << getArea(base) << endl;

}