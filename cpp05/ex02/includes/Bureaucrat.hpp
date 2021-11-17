#pragma once
#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
public:
	// Constructors
	Bureaucrat();
	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(const Bureaucrat& other);

	// Assignment operator overload
	Bureaucrat& operator=(const Bureaucrat& rhs);

	// Destructor
	~Bureaucrat();

	// Getters
	std::string const getName() const;
	unsigned int getGrade() const;

	void incrementGrade();
	void decrementGrade();
	void signForm(Form& form) const;
	void executeForm(Form& form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade too low");
		}
	};

private:

	std::string const	_name;
	unsigned int		_grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);