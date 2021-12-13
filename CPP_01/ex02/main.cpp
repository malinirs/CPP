#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address str       " << &string << std::endl;
	std::cout << "Address stringPTR " << &stringPTR << std::endl;
	std::cout << "Address stringREF " << &stringREF << std::endl << std::endl;

	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;

	return (0);
}
