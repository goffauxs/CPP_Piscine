#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "Scavtrap constructor called for " << name << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode!" << std::endl;
}