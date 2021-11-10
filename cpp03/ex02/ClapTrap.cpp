#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name;
	if (this->_ep > 0)
	{
		this->_ep -= 5;
		std::cout << " attacked " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
	}
	else
		std::cout << " has too little energy points to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	if (this->_hp == 0)
		std::cout << " is already dead, stop it!";
	else if (amount > this->_hp)
	{
		std::cout << " takes " << this->_hp << " damage and dies!" << std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount;
		std::cout << " takes " << amount << " damage, " << this->_hp << " hp remaining!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	std::cout << "ClapTrap " << this->_name << " is healed " << amount << " hit points, now has " << this->_hp << " hit points." << std::endl;
}
