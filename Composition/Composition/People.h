#pragma once
#include <string>
#include "Birthday.h"

using namespace std; 
class People
{
public:
	People(string n, Birthday bo_birthday);
	~People();
	void printInfo(); 



private:
	string name;
	Birthday dateOfBirth; 
};

