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
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
			argv++;
		}
		std::cout << std::endl;
	}
}
