//#include "Person.h"
#include "twitter.h"
#include"status.h"
#include<iostream>
using std::cout;
using std::endl;
using std::string;



int main()
{
	Person P1("Rohit","Sharma", 25);	
	{
		twitter t1("Neeraj", "Dubey", 32, "@NDubey");
		std::string name2 = t1.getName();
	}

	std::cout << "After innermost block\n";
	std::string name = P1.getName();

	status s = Pending;
	s = Approved;

	Filerror fe = Filerror::notfound;
	fe = Filerror::ok;

	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

	return 0;
}