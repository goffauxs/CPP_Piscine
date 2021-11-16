#include "Cure.hpp"
#include <iostream>

Cure::Cure()
	: AMateria("cure")
{
}

Cure::Cure(const Cure& other)
	: AMateria(other)
{
}

Cure& Cure::operator=(const Cure& other)
{
	this->AMateria::operator=(other);
	return *this;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}