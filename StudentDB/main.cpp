#include <iostream>
#include "Studentdb.h"


using namespace std;

int main() {
    StudentDB stdb;

    stdb.readFile("student.txt");
    string stringinput;

    while (true){
        cout << "<<---------------------------------->>" << endl;
        cout << "Press 1. for Display the Student list" << endl;
        cout << "Press 2. for Add a student to the Student list" << endl;
        cout << "Press 3. for Delete a student from the Student list" << endl;
        cout << "Press 4. for Searching a student from the Student list" << endl;
        cout << "Press 5. for Closing the program" << endl;

        int input;
        cout << "Write your decision: ";
        cin >> input;
        cout << endl;

        switch(input){

            case 1:
                stdb.displayStudents();
                break;

            case 2:

                cout << "Please write the firstname and the lastname of the student you want to add" << endl;
                cin >> stringinput;
                stdb.addStudent(stringinput);
                break;

            case 3:

                cout << "Please write the firstname and the lastname of the student you want to delete" << endl;
                cin >> stringinput;
                stdb.deleteStudent(stringinput);
                break;

            case 4:

                cout << "Please write the firstname and the lastname of the student you want to search" << endl;
                cin >> stringinput;
                stdb.searchForStudent(stringinput);
                break;

            default:
                cout << "Please write a specific input." << endl;

            case 5:
                cout << "You have now chosen to end the program" << endl;
                exit(0);

        }

    }


    return 0;
}