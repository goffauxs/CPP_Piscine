#include "Dog.hpp"

Dog::Dog()
	: AAnimal("Dog"), _brain(new Brain())
{
	std::cout << "Dog(void) constructor called" << std::endl;
}

Dog::Dog(std::string type)
	: AAnimal(type), _brain(new Brain())
{
	std::cout << "Dog(\"" << type << "\") constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
	: AAnimal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Dog copy constructor called on " << other._type << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called for " << this->_type << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}