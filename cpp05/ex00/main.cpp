#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat john("John", 2);
	Bureaucrat jim("Jim", 149);

	try
	{
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.incrementGrade();
		jim.decrementGrade();
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.incrementGrade();
		jim.decrementGrade();
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}