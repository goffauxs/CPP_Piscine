#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap constructor called for " << this->_name << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " would like to high five everyone!" << std::endl;
}