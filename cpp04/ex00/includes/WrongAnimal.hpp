#pragma once
#include <iostream>

class WrongAnimal
{
public:
	// Constructors
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& other);

	// Assignment operator overload
	WrongAnimal& operator=(const WrongAnimal& rhs);
	
	// Destructor
	virtual ~WrongAnimal();

	// Getters
	std::string getType() const;

	// Member functions
	void makeSound() const;

protected:

	std::string _type;
};