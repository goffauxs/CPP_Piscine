#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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

	// Getters
	Brain* getBrain() const;

	// Member functions
	virtual void makeSound() const;

private:

	Brain* _brain;
};