#include "Person.h"
#include<iostream>


int main()
{
	Person P1("Rohit","Sharma", 25);	
	{
		Person P2;
	}
	std::cout << "This is the outer most block\n";
	std::string name = P1.getName();
	return 0;
}