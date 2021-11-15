#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
{
	std::cout << "DiamondTrap(void) constructor called" << std::endl;
	this->FragTrap::_hp = 100;
	this->ScavTrap::_ep = 50;
	this->FragTrap::_ad = 30;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DiamondTrap(\"" << name << "\") constructor called" << std::endl;
	this->FragTrap::_hp = 100;
	this->ScavTrap::_ep = 50;
	this->FragTrap::_ad = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called on " << other._name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	ClapTrap::operator=(rhs);
	ScavTrap();
	FragTrap();
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "whoAmI(): I am DiamondTrap " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}