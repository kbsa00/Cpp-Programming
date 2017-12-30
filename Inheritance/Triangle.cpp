//
// Created by Eier on 12/30/2017.
//

#include "Triangle.h"



Triangle::~Triangle() {
    height = 0;
}

Triangle::Triangle(int Height){
    height = Height;
}

void Triangle::setHeight(int Height){
    height = Height;
}

int Triangle::getHeight(){
    return height;
}

double Triangle::getArea(int base) {
    return (0.5 * base * height);

}



