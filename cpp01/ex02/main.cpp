#include <iostream>
#include <string>

int main()
{
	std::string string("HI THIS IS BRAIN");
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of string using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of string using stringREF: " << &stringREF << std::endl;
	std::cout << "String using stringPTR: '" << *stringPTR << "'" << std::endl;
	std::cout << "String using stringREF: '" << stringREF << "'" << std::endl;
}