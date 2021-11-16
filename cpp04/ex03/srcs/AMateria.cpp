#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
	: _type(type)
{
}

AMateria::AMateria(const AMateria& other)
	: _type(other._type)
{
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}