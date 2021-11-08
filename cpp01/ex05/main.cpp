#include "Karen.hpp"
#include <iostream>

int main()
{
	Karen karen;

	std::cout << "DEBUG: " << std::endl;
	karen.complain("DEBUG");
	std::cout << "INFO: " << std::endl;
	karen.complain("INFO");
	std::cout << "WARNING: " << std::endl;
	karen.complain("WARNING");
	std::cout << "ERROR: " << std::endl;
	karen.complain("ERROR");
}