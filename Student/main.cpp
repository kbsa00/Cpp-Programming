#include <iostream>
#include <vector>
#include "student.h"

using namespace std;
void fill_up_List(vector<student> &);
void calculate_Avrage_Grade(vector<student> &);
void print_List(vector<student> &);

int main() {

    vector<student> listofStudents;
    fill_up_List(listofStudents);
    print_List(listofStudents);
    calculate_Avrage_Grade(listofStudents);
    return 0;
}


void fill_up_List(vector<student> & listofStudents){
    cout << "How many people in the class? " << endl;
    int sizeClass;
    cin >> sizeClass;
    string name;
    char grade;

    for(int i = 0; i < sizeClass; i++){
        cout << "\nWhat is the name of student " + (i+1) << ": " << endl;
        cin >> name;

        cout << "\nWhat is the grade: " << endl;
        cin >> grade;
        student student1(name, grade);
        listofStudents.push_back(student1);
    }
}

void calculate_Avrage_Grade(vector<student> & listOfStudents){

    int sum = 0;

    for (unsigned int i = 0; i < listOfStudents.size() ; i++) {
        char grade = listOfStudents.at(i).getGrade();

        switch (grade) {
            case 'A':
                sum += 6;
                break;
            case 'B':
                sum += 5;
                break;
            case 'C':
                sum += 4;
                break;
            case 'D':
                sum += 3;
                break;
            case 'E':
                sum += 2;
                break;

        }

    }

    cout << "\nThe Avrage grade of the whole Class is: " << (sum/listOfStudents.size()) << endl;
}

void print_List(vector<student> & listOfStudents){

    cout << endl << "Printing now out the whole class list.." << endl;

    for (unsigned int i = 0; i < listOfStudents.size(); i++) {
        cout << "Name: " << listOfStudents.at(i).getName() << "\nGrade:  " << listOfStudents.at(i).getGrade() << endl;
    }
}