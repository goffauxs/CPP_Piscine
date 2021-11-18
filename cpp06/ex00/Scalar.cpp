#include "Scalar.hpp"

char Scalar::toChar() const
{
	char c;
}

std::ostream& operator<<(std::ostream& o, const Scalar& rhs)
{
	o << "char: ";
	try
	{
		char c;
		c = rhs.toChar();
		o << c << std::endl;
	}
	catch(const std::exception& e)
	{
		o << e.what() << std::endl;
	}
	o << "int: ";
	try
	{
		int i;
		i = rhs.toInt();
		o << i << std::endl;
	}
	catch(const std::exception& e)
	{
		o << e.what() << std::endl;
	}
	o << "float: ";
	try
	{
		float f;
		f = rhs.toFloat();
		o << f << std::endl;
	}
	catch(const std::exception& e)
	{
		o << e.what() << std::endl;
	}
	o << "double: ";
	try
	{
		double d;
		d = rhs.toDouble();
		o << d << std::endl;
	}
	catch(const std::exception& e)
	{
		o << e.what() << std::endl;
	}
	return o;
}