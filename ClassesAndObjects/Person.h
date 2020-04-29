#include <string>
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int number;

public:
	Person(std::string first, std::string last, int amul);
	Person();
	~Person();

	std::string getName();

};