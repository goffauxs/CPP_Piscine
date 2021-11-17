#include "Bureaucrat.hpp"
#include "Form.hpp"

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

Bureaucrat::~Bureaucrat()
{
}


std::string const Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->_grade;
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

void Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << *this << " cannot sign " << form << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form& form) const
{
	try
	{
		form.action(*this);
		std::cout << *this << " executed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << *this << " cannot execute " << form << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}