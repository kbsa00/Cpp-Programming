// Composition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Birthday.h"
#include "People.h"
#include <iostream>

using namespace std;


int main()
{
	Birthday birthObject(04, 25, 1994); 
	People peopleObject("Khalid Said", birthObject);
	
	peopleObject.printInfo();

	system("pause"); 


    return 0;
}

