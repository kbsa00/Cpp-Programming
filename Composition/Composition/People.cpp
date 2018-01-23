#include "stdafx.h"
#include "People.h"
#include <iostream>
#include "Birthday.h"


People::People(string n, Birthday bo_birthday) : name(n), dateOfBirth(bo_birthday)
{

}

People::~People()
{
	
} 
 
void People::printInfo()
{
	cout << name << " was born ";
	dateOfBirth.printDate();
}