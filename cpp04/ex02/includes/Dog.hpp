#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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

	// Getters
	Brain* getBrain() const;

	// Member functions
	virtual void makeSound() const;

private:

	Brain* _brain;
};