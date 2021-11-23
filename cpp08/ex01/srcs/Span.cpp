#include "Span.hpp"
#include <numeric>
#include <iostream>
#include <cstdlib>

Span::Span(const unsigned int& N)
	: _size(N)
{
}

Span::Span(const Span& other)
	: _v(other._v), _size(other._size)
{
}

Span::~Span()
{
}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->_v = rhs._v;
		this->_size = rhs._size;
	}
	return *this;
}

void Span::addNumber(int x)
{
	if (this->_v.size() < this->_size)
		this->_v.push_back(x);
	else
		throw ContainerFullException();
}

void Span::addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
{
	int distance = std::distance(begin, end);
	if (distance + this->_v.size() > this->_size)
	{
		this->_v.insert(this->_v.end(), begin, begin + (this->_size - this->_v.size()));
		throw ContainerFullException();
	}
	else
		this->_v.insert(this->_v.end(), begin, end);
}

unsigned int Span::shortestSpan() const
{
	std::vector<int> tmp;

	if (this->_v.size() <= 1)
		throw ContainerEmptyException();
	std::adjacent_difference(this->_v.begin(), this->_v.end(), std::back_inserter(tmp));
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		*it = abs(*it);
	return *min_element(tmp.begin(), tmp.end());
}

unsigned int Span::longestSpan() const
{
	std::vector<int> tmp;

	if (this->_v.size() <= 1)
		throw ContainerEmptyException();
	std::adjacent_difference(this->_v.begin(), this->_v.end(), std::back_inserter(tmp));
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		*it = abs(*it);
	return *max_element(tmp.begin(), tmp.end());
}