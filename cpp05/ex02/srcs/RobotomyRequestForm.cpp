#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("robotomy", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: Form(other)
{	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	this->Form::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm()
	: Form("robotomy", "default", 72, 45)
{
}

void RobotomyRequestForm::action(const Bureaucrat& executor) const
{
	this->Form::execute(executor);
	std::cout << "Makes some drilling noises" << std::endl;
	if (rand() < RAND_MAX / 2)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy on " << this->getTarget() << " has failed." << std::endl;
}