#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) :
	_name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie instance '" << this->_name << "' destroyed." << std::endl;
}

void Zombie::announce( void ) const
{
	std::cout << "<name> " << this->_name << std::endl;
}