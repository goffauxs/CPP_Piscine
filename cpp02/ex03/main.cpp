#include <iostream>
#include "Point.hpp"

int main( void )
{
	const Point a(1.f, 1.f);
	const Point b(4.f, 1.f);
	const Point c(2.5f, 3.f);
	const Point p1(2.f, 2.f);
	const Point p2;

	std::cout << "p1 is " << (bsp(a, b, c, p1) ? "in" : "not in") << " the triangle" << std::endl;
	std::cout << "p2 is " << (bsp(a, b, c, p2) ? "in" : "not in") << " the triangle" << std::endl;
}