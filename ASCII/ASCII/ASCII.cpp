// ASCII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std; 


int main()
{
	int counter = 33;
	char mychar;

	while (counter <= 255)
	{
		for (int i = 0; i < 10 && counter <= 255; i++)
		{
			mychar = char(counter);
			cout << " " << counter << ": " << mychar;
			counter++;
		}
		cout << endl;
	}

	system("pause");

    return 0;
}

