#pragma once
#include <string>

class Weapon
{
public:
	// Constructors/Destructors
	Weapon(std::string type);
	~Weapon(void);

	// Getters
	std::string const & getType(void) const;

	// Setters
	void setType(std::string type);

private:
	std::string _type;
};