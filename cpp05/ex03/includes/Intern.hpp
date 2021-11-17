#include <string>
#include "Form.hpp"

class Intern
{
public:
	// Constructor
	Intern();

	// Destructor
	~Intern();

	Form* makeForm(const std::string& formName, const std::string& target) const;
};