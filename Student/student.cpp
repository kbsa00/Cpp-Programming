//
// Created by Eier on 12/28/2017.
//

#include "student.h"

student::student(){

}

student::~student() {


}
student::student(string name, char grade) {
    this->name = name;
    this->grade = grade;
}


string student::getName() {
    return name;
}

char student::getGrade() {
    return grade;
}




