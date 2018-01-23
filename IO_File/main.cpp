#include <iostream>
#include <fstream>
#include <vector>

void readTextfileWithNumbers();
void writeToAFile();
void readFile();

using namespace std;


int main() {

    readFile();

    return 0;
}


void readTextfileWithNumbers(){

    ifstream reader;
    reader.open("numbers.txt");

    // Always check for an error after opening the textfile
    if(reader.fail()){
        cerr << "Could not read the file";
    }

    int x, y;

    reader >> x >> y;

    cout << "Num 1: " << x << endl;
    cout << "Num 2: " << y << endl;

    reader.close();

}



void writeToAFile(){

    //Small example..
    ofstream outfile;
    outfile.open("tekst.txt");

    for (int i = 0; i < 9 ; ++i) {
        outfile << i << endl;

    }
    outfile.close();
}


void readFile(){
    //Reading a textfile of tekst and storing it in a vector
    ifstream reader;

    reader.open("tekst.txt");

    if (reader.fail()){
        cerr << "Could not read the file";
    }

    vector<string> tekstList;

    string line;
    while(getline(reader, line)){
        tekstList.push_back(line);
    }


    for(unsigned int i = 0; i < tekstList.size(); i++){
        cout << "Line " <<  i << ": " << tekstList.at(i) << endl;
    }


    reader.close();



}