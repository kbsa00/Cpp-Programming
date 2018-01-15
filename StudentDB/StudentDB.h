//
// Created by Eier on 1/8/2018.
//

#ifndef STUDENTDB_STUDENTDB_H
#define STUDENTDB_STUDENTDB_H

#include <string>
#include <vector>
#include <fstream>

using namespace std;

class StudentDB {
public:
    ~StudentDB();
    void readFile(string filename);
    void displayStudents();
    void searchForStudent(string name);
    void addStudent(string name);
    void deleteStudent(string name);
    void updateFile();

private:
    vector<string> studentList;

};


#endif //STUDENTDB_STUDENTDB_H
