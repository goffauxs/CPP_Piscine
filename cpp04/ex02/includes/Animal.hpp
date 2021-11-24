#pragma once
#include <iostream>

class Animal
{
public:
	// Constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal& other);

	// Assignment operator overload
	Animal& operator=(const Animal& rhs);
	
	// Destructors
	virtual ~Animal();

	// Getters
	std::string getType() const;

	// Member functions
	virtual void makeSound() const = 0;

protected:

	std::string _type;
};