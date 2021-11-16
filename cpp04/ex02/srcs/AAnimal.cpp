#include "AAnimal.hpp"

AAnimal::AAnimal()
	: _type("")
{
	std::cout << "AAnimal(void) constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
	: _type(type)
{
	std::cout << "AAnimal(\"" << type << "\") constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
	: _type(other._type)
{
	std::cout << "AAnimal copy constructor called on " << other._type << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	this->_type = rhs._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called for " << this->_type << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}