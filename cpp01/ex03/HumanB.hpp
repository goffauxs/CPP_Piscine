#pragma once
#include "Weapon.hpp"

class HumanB
{
public:
	// Constructor/Destructor
	HumanB(std::string name);
	~HumanB(void);

	// Setters
	void setWeapon(Weapon& weapon);

	void attack(void) const;
private:
	std::string _name;
	Weapon* _weapon;
};