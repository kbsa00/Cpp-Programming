#include <iostream>
#include "UkensTipping.h"

using namespace std;

void arrayPlay(){
    int array[10];

    for(int i = 0; i < 10; i++){
        array[i] = rand() % 25 + 1;
    }


    for(int i = 0; i < 10; i++){
        cout << "Round " << i+1 << ": ";
        for(int j = 0; j < 10; j++){
            cout<< array[j] << " ";
        }
        cout << " " << endl;


        int a = array[0];

        for (int z = 1; z < 10; z++){
            array[z-1] = array[z];
        }
        array[10 - 1] = a;
        cout << " " << endl;
    }

}
int main() {
    UkensTipping uk;
    uk.genereteUkensRekke();
    uk.genereteUsersRekke();
    uk.printAll();
    uk.compareResults();

    return 0;
}