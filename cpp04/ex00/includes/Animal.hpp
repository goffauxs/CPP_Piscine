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
	~Animal();

	// Getters
	std::string getType() const;

	// Member functions
	virtual void makeSound() const;

protected:

	std::string _type;
};