#include "Animal.hpp"

class Dog : public Animal
{
public:
	// Constructors
	Dog();
	Dog(std::string type);
	Dog(const Dog& other);

	// Assignment operator overload
	Dog& operator=(const Dog& rhs);

	// Destructor
	~Dog();

	// Member functions
	void makeSound() const;
};