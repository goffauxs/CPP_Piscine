#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: _name("John Doe"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
	: _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::string const Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const
{
	return std::string("Grade is too high!").c_str();
}

const char* Bureaucrat::GradeTooLowException::what() const
{
	return std::string("Grade is too low!").c_str();
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}