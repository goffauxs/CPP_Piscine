#include "Cat.hpp"

Cat::Cat()
	: AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "Cat(void) constructor called" << std::endl;
}

Cat::Cat(std::string type)
	: AAnimal(type), _brain(new Brain())
{
	std::cout << "Cat(\"" << type << "\") constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
	: AAnimal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor called on " << other._type << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called for " << this->_type << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}