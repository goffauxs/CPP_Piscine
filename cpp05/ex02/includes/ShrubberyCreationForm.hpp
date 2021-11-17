#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	// Constructors
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);

	// Assignment operator overload
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

	// Destructor
	~ShrubberyCreationForm();

	void action(const Bureaucrat& executor) const;

private:

	ShrubberyCreationForm();
};