#include "iter.hpp"
#include <iostream>
#include <string>

void print_to_lower(const std::string& str)
{
	for (std::string::const_iterator itr = str.cbegin(); itr != str.cend(); itr++)
		std::cout << (char)tolower(*itr);
	std::cout << std::endl;
}

void print_to_upper(const std::string& str)
{
	for (std::string::const_iterator itr = str.cbegin(); itr != str.cend(); itr++)
		std::cout << (char)toupper(*itr);
	std::cout << std::endl;
}

int main()
{
	std::string strings[] = {"One", "Two", "Three", "Four"};

	std::cout << "Normal: " << std::endl;
	::iter(strings, 4, print_normal<std::string>);
	std::cout << "To Upper: " << std::endl;
	::iter(strings, 4, print_to_upper);
	std::cout << "To Lower: " << std::endl;
	::iter(strings, 4, print_to_lower);

	float floats[] = {1.23, 4.56, 7.89};

	std::cout << "Floats: " << std::endl;
	::iter(floats, 3, print_normal<float>);
}