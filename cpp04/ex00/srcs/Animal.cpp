#include "Animal.hpp"

Animal::Animal()
	: _type("Animal")
{
	std::cout << "Animal(void) constructor called" << std::endl;
}

Animal::Animal(std::string type)
	: _type(type)
{
	std::cout << "Animal(\"" << type << "\") constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
	: _type(other._type)
{
	std::cout << "Animal copy constructor called on " << other._type << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	this->_type = rhs._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called for " << this->_type << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Default animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}