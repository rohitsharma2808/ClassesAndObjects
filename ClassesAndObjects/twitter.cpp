
#include "twitter.h"
#include<iostream>

twitter::twitter(std::string first, std::string last, int amul, std::string handle) : Person(first, last, amul), twitterhandle(handle)
{
	std::cout << "Constructing tweeter " << twitterhandle << std::endl;
}

twitter::~twitter()
{
	std::cout << "Destructing twitter" << twitterhandle << std::endl;
}