//
// Created by Khalid Said on 12/17/17.
//

#include "UkensTipping.h"
#include <iostream>

using namespace std;

void UkensTipping::genereteUkensRekke() {
cout << "Genereted the weekresults" << endl;

    for(int i = 0; i < 12; i++){
        int number = rand() % 3 + 1;


        switch(number){
            case 1: ukensrekke[i] = 'H';
                break;

            case 2: ukensrekke[i] = 'B';
                break;

            case 3: ukensrekke[i] = 'U';
                break;

        }

    }


}

void UkensTipping::genereteUsersRekke() {
    cout << "Time to generete users guesses" << endl;

    for (int i = 0; i < 12 ; i++) {
        cout << "Please input your guess " << i+1 << endl;
        char guess;
        cin >>  guess;

        if(toupper(guess) == 'H' || toupper(guess) == 'B' || toupper(guess) == 'U'){
            minrekke[i] = guess;
        }
        else{
            i = i-1;
        }

    }


}


void UkensTipping::printAll() {
    cout << "Printing out the weekresult and usersresult" << endl;

    cout << "Minrekke  Ukensrekke" << endl;

    for (int i = 0; i < 12; i++) {
        char guess = toupper(minrekke[i]);
        cout << guess << "\t\t\t" << ukensrekke[i] << endl;
    }
}


void UkensTipping::compareResults() {

    int counter = 0;

    for (int i = 0; i < 12 ; i++) {
        if(toupper(minrekke[i]) == toupper(ukensrekke[i])) counter++;
    }

    cout << "The user guessed right " << counter << " times" << endl;
}