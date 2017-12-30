//
// Created by Eier on 12/28/2017.
//

#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H

#include <string>

using namespace std;

class student {
public:
     student();
     ~student();
     student(string name, char grade);
     string getName();
     char getGrade();

private:
    string name;
    char grade;
};


#endif //STUDENT_STUDENT_H
