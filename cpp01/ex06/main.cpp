#include "Karen.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Karen karen;

	if (argc == 2)
	{
		std::string levels[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};
		int i = 0;
		while (levels[i] != argv[1])
			i++;
		switch (i)
		{
			case 0:
				std::cout << "[ " << levels[0] << " ]" << std::endl;
				karen.complain(levels[0]);
			case 1:
				std::cout << "[ " << levels[1] << " ]" << std::endl;
				karen.complain(levels[1]);
			case 2:
				std::cout << "[ " << levels[2] << " ]" << std::endl;
				karen.complain(levels[2]);
			case 3:
				std::cout << "[ " << levels[3] << " ]" << std::endl;
				karen.complain(levels[3]);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}