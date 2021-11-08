#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) :
	_name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie instance '" << this->_name << "' destroyed." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce( void ) const
{
	std::cout << "<name> " << this->_name << std::endl;
}