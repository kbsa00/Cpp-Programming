// LambdaExpression.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stddef.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void addingVectors(); 

// Performs the lambda function.  
void perfomeIncrement(std::function<void ()> func){
	func();
}

int main(){

	int a = 10; 
	int b = 11; 
	// = henter alle variabler fra main inn i lambda functionen
	auto func = [=]() {
		return a + b; 
	};

	std::cout << "answer: " << func() << std::endl;
	
	// & henter alle referanser av variablene fra Main i lambda functionen. 
	auto funcB = [&] () {
		a = 100; 
		return a + b; 
	}; 

	std::cout << "Answer: " << funcB() << std::endl; 
	
	//Henter alle variabler i main, men henter B sin referanse. 
	auto funcC = [=, &b](){
		b = 20; 
		std::cout << "B er nå: " << b << std::endl; 
	};
	funcC();

	int x = 100; 
	auto increment = [&x]()
	{
		x++; 
	}; 

	//Sending a lambda function to a method..
	perfomeIncrement(increment); 
	std::cout << x << std::endl; 

    return 0;
}

void addingVectors()
{
	std::vector<int> list = {5,5,5};
	int total = 0; 
	std::for_each (list.begin(), list.end(), [&] (int x)
	{
		total += x; 
	}); 

	std::cout << "SUM of vector, " << total; 

}