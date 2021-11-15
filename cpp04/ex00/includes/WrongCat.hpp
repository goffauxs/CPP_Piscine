#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// Constructors
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& other);

	// Assignment operator overload
	WrongCat& operator=(const WrongCat& rhs);

	// Destructor
	~WrongCat();

	// Member functions
	void makeSound() const;
};