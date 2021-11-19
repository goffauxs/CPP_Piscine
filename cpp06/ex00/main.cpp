#include <iostream>
#include <string>
#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		// char *next;
		// char *next2;
		// double test = strtod(argv[1], &next);
		// long int test2 = strtol(argv[1], &next2, 10);
		// std::cout << "double: " << test << std::endl;
		// std::cout << "double_next: " << next << std::endl;
		// std::cout << "long: " << test2 << std::endl;
		// std::cout << "long_next: " << next2 << std::endl;

		try
		{
			Scalar scalar(argv[1]);
			std::cout << scalar;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Usage: ./convert <value>" << std::endl;
}