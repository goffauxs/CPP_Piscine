#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("pardon", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: Form(other)
{	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	this->Form::operator=(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm()
	: Form("pardon", "default", 25, 5)
{
}

void PresidentialPardonForm::action(const Bureaucrat& executor) const
{
	this->Form::execute(executor);
	std::cout << this->getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}