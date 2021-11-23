#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: _name("default"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap(void) constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap(\"" << name << "\") constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name), _hp(other._hp), _ep(other._ep), _ad(other._ad) 
{
	std::cout << "ClapTrap copy constructor called on " << other._name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name;
	if (this->_ep > 0)
	{
		this->_ep -= (this->_ep >= 5) ? 5 : this->_ep;
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
