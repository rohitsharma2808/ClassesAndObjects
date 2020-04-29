#include "Person.h"
#include<iostream>

Person::Person(std::string first, std::string last, int amul) : firstname(first ), lastname(last), number(amul)
	{
	std::cout << "constructing" << " " << firstname << " " << lastname<<std::endl;
}

Person::Person() : number(0)
{
	std::cout << "This is the default constructor "<<firstname<<" "<<lastname<< std::endl;

}

Person::~Person()
{
	std::cout << "destructing" << " " << firstname << " " << lastname << std::endl;
}

std::string Person::getName() 
{
	return firstname + " " + lastname;
}