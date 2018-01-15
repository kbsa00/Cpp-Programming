//
// Created by Eier on 1/8/2018.
//

#include "StudentDB.h"
#include <iostream>
StudentDB::~StudentDB() {

}


void StudentDB::readFile(string filename) {
    ifstream reader;
    string line;
    reader.open(filename);

    //Checking if something went wrong while opening the file
    if(reader.fail()){
        cerr << "Error: Something went wrong while opening the file!\nWill no end the program" << endl;
        exit(0);
    }

    while(getline(reader, line)){
        studentList.push_back(line);
    }

    reader.close();
}


void StudentDB::displayStudents() {
    cout << "\nList of all students" << endl;
    cout << "<-------------------------------->" << endl;

    for(unsigned int i = 0; i < studentList.size(); i++){
        cout << i+1 << ": "<< studentList.at(i) << endl;
    }
}

void StudentDB::addStudent(string name) {
    cout << "\nNow adding the student: " << name << "\n" << endl;
    studentList.push_back(name);
    updateFile();
}

void StudentDB::deleteStudent(string name) {
    cout << "\nNow deleting the student: " << name << endl;

    for(unsigned int i = 0; i < studentList.size(); i++){

        if(studentList.at(i) == name){
            studentList.erase(studentList.begin(), studentList.begin()+i);
            cout << "\nNow deleted the student: " << name;
            updateFile();
        }
    }

}

void StudentDB::searchForStudent(string name) {
    cout << "\nSearching for the student: " << name << endl;

    for(unsigned int i = 0; i < studentList.size(); i++){

        if(studentList.at(i) == name){
            cout << "\nFound the student: " << name << endl;

        }
    }
}

void StudentDB::updateFile() {
    ofstream input;
    cout << "\nNow Updating the file..." << endl;

    input.open("student.txt");

    unsigned int index = 0;

    while(index < studentList.size()){
        input << studentList.at(index) << "\n";
        index++;
    }

    cout << "\nFile has now been updated.." << endl;
    input.close();
}