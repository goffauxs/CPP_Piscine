#pragma once
#include <iostream>

class Brain
{
public:
	// Constructors
	Brain();
	Brain(const Brain& other);
	
	// Assignment operator overload
	Brain& operator=(const Brain& rhs);

	// Destructor
	~Brain();

	// Getters
	const std::string& getIdea(int index) const;

private:
	
	std::string _ideas[100];
};
