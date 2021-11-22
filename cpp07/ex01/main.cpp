#include "iter.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void print_to_lower(std::string& str)
{
	for (std::string::iterator itr = str.begin(); itr != str.end(); itr++)
		*itr = tolower(*itr);
	std::cout << str << std::endl;
}

void print_to_upper(std::string& str)
{
	for (std::string::iterator itr = str.begin(); itr != str.end(); itr++)
		*itr = toupper(*itr);
	std::cout << str << std::endl;
}

int main()
{
	std::string strings[] = {"One", "Two", "Three", "Four"};

	std::cout << "Normal: " << std::endl;
	iter(strings, 4, print_normal<std::string>);
	std::cout << "To Upper: " << std::endl;
	iter(strings, 4, print_to_upper);
	std::cout << "To Lower: " << std::endl;
	iter(strings, 4, print_to_lower);

	float floats[] = {1.23, 4.56, 7.89};

	std::cout << "Floats: " << std::endl;
	iter(floats, 3, print_normal<float>);
}