#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
	: _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
	: _fixedPoint(other._fixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixedPoint = rhs._fixedPoint;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}