#include "stdafx.h"
#include "Sally.h"


Sally::Sally()
{
}


Sally::Sally(int n) : num(n)
{
	
}

Sally Sally::operator+(Sally aso)
{
	Sally brandNew; 
	brandNew.num = num + aso.num;
	return (brandNew); 
}


