#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
public:
	// Constructor
	Form(const std::string& name);
	Form(const std::string& name, const std::string& target);
	Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec);
	Form(const std::string& name, const std::string& target, const unsigned int gradeSign, const unsigned int gradeExec);
	Form(const Form& other);

	// Assignment operator overload
	Form& operator=(const Form& rhs);

	// Destructor
	~Form();

	// Getters
	unsigned int getGradeSign() const;
	unsigned int getGradeExec() const;
	std::string getName() const;
	std::string getTarget() const;
	bool isSigned() const;

	void beSigned(const Bureaucrat& candidate);
	void execute(const Bureaucrat& executor) const;
	virtual void action(const Bureaucrat& executor) const = 0;

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

	class FormNotSignedException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("form is not signed");
		}
	};

private:

	Form() : _name(""), _target(""), _signed(false), _gradeSign(1), _gradeExec(1) {};

	const std::string	_name;
	const std::string	_target;
	bool				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);