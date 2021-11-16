#pragma once
#include <iostream>

class AAnimal
{
public:
	// Constructors
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& other);

	// Assignment operator overload
	AAnimal& operator=(const AAnimal& rhs);
	
	// Destructors
	virtual ~AAnimal();

	// Getters
	std::string getType() const;

	// Member functions
	virtual void makeSound() const = 0;

protected:

	std::string _type;
};