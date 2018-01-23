#pragma once
class Birthday
{
public:
	 Birthday(int m, int d, int y);
	~Birthday();
	void printDate(); 

private:
	unsigned int month; 
	unsigned int day; 
	unsigned int year; 
};

