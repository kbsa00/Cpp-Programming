#include <iostream>
#include <vector>

using namespace std;

int main() {


    vector<int> vectorlist;

    //Adding to the list..
    vectorlist.push_back(14);
    vectorlist.push_back(42);
    vectorlist.push_back(51);
    vectorlist.push_back(67);
    vectorlist.push_back(56);

    //Vector.size() returns a unsigned int, Therefore you need to use a unsigned int in the loop

    cout << "Printing out the list" << endl;

    for(unsigned int i = 0; i < vectorlist.size(); i++){
        cout << vectorlist.at(i) << " ";
    }
    cout << endl;

    //Insert() function will add the new value in the index, But will not overwrite.
    //begin() is the start of the list aka first index in the list, you could add + 4 for the 4th index
    vectorlist.insert(vectorlist.begin(), 5);

    cout << "Inserting number 5 in index 1" << endl;
    for(unsigned int i = 0; i < vectorlist.size(); i++){
        cout << vectorlist.at(i) << " ";
    }
    cout << endl;



    //Erease will remove the element of the index.
    vectorlist.erase(vectorlist.begin() + 2);
    cout << "Erasing the index 2 " << endl;
    for(unsigned int i = 0; i < vectorlist.size(); i++){
        cout << vectorlist.at(i) << " ";
    }

    //Clear will clear the whole list
    vectorlist.clear(); 

    return 0;
}