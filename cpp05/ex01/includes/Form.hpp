#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
public:
	// Constructor
	Form(const std::string& name);
	Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec);
	Form(const Form& other);

	// Assignment operator overload
	Form& operator=(const Form& rhs);

	// Destructor
	~Form();

	// Getters
	unsigned int getGradeSign() const;
	unsigned int getGradeExec() const;
	std::string getName() const;
	bool isSigned() const;

	void beSigned(const Bureaucrat& candidate);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("grade is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("grade is too low");
		}
	};

	class FormAlreadySignedException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("form is already signed");
		}
	};

private:

	Form() : _name(""), _signed(false), _gradeSign(1), _gradeExec(1) {};

	const std::string	_name;
	bool				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);