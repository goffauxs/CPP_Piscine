#include "Animal.hpp"

class Cat : public Animal
{
public:
	// Constructors
	Cat();
	Cat(std::string type);
	Cat(const Cat& other);

	// Assignment operator overload
	Cat& operator=(const Cat& rhs);

	// Destructor
	~Cat();

	// Member functions
	virtual void makeSound() const;
};