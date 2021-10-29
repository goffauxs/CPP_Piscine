#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		++argv;
		while (*argv)
		{
			std::string str(*argv);
			std::cout << std::uppercase << str;
			argv++;
		}
		std::cout << std::endl;
	}
}
