#include "Point.hpp"

Point::Point(void)
	: _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const float x, const float y)
	: _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point& copy)
	: _x(copy._x), _y(copy._y)
{
}

Point::~Point(void)
{
}

Point& Point::operator=(const Point& rhs)
{
	(Fixed)this->_x = rhs._x;
	(Fixed)this->_y = rhs._y;
	return *this;
}

Fixed const Point::getX(void) const
{
	return this->_x;
}

Fixed const Point::getY(void) const
{
	return this->_y;
}
