//
// Created by Eier on 12/30/2017.
//

#ifndef INHERITANCE_TRIANGLE_H
#define INHERITANCE_TRIANGLE_H

#include <iostream>

class Triangle {
public:
    Triangle();
    Triangle(int Heigth);
    ~Triangle();
    int getHeight();
    void setHeight(int Height);
    double getArea(int base);


private:
    int height;

};


#endif //INHERITANCE_TRIANGLE_H
