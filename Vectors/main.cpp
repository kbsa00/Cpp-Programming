#include <iostream>
#include <vector>

using namespace std;

void printList(vector<int>&);

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
    printList(vectorlist);

    cout << endl;

    //Insert() function will add the new value in the index, But will not overwrite.
    //begin() is the start of the list aka first index in the list, you could add + 4 for the 4th index
    vectorlist.insert(vectorlist.begin(), 5);

    cout << "Inserting number 5 in index 1" << endl;
    printList(vectorlist);
    cout << endl;



    //Erease will remove the element of the index.
    vectorlist.erase(vectorlist.begin() + 2);
    cout << "Erasing the index 2 " << endl;
    printList(vectorlist);

    //Clear will clear the whole list
    vectorlist.clear();

    return 0;
}



//Why do we use the & refrence? Instead of copying the list, you should always use the same
//vector list. One vector list takes enough memory space. Calling on it several times can
// make your program run slow..

void printList(vector<int> & vectorlist){

    for(unsigned int i = 0; i < vectorlist.size(); i++){
        cout << vectorlist.at(i) << " ";
    }

}