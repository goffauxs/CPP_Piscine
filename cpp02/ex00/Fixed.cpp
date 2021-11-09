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

Fixed::Fixed(Fixed& const fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPoint = fixed.getRawBits();
}

Fixed& Fixed::operator=(Fixed& const rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixedPoint = rhs.getRawBits();
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