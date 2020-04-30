#pragma once
#include "Person.h"
#include<string>

class twitter : public Person
{
private:
	std::string twitterhandle;
public:
	twitter(std::string first, std::string last, int amul, std::string handle);
	~twitter();

};