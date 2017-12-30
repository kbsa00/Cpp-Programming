//
// Created by Eier on 12/30/2017.
//

#ifndef INHERITANCE_ISOSCELES_H
#define INHERITANCE_ISOSCELES_H

#include "Triangle.h"
#include <iostream>

using namespace std;

class Isosceles : public Triangle {
public:
   // Isosceles();


    Isosceles(int, int, int);

    //Getters
    int getBase();
    int getSideOne();
    int getPerimeter();

    //Setters
    void setBase(int);
    void setSideOne(int);

    //PrintMethod
    void printInfo();



private:
    int base;
    int sideOne;

};


#endif //INHERITANCE_ISOSCELES_H
