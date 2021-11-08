#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :
	_name(name)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his ";
	if (this->_weapon)
		std::cout << this->_weapon->getType();
	else
		std::cout << "bare fists";
	std::cout << std::endl;
}