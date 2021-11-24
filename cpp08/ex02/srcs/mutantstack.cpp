#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
	: MutantStack<T>::stack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
	: MutantStack<T>::stack(other)
{
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& rhs)
{
	if (this != &rhs)
	{
		MutantStack<T>::stack::operator=(rhs);
	}
	return *this;
}

template <typename T>
MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
MutantStack<T>::iterator MutantStack<T>::end()
{
	
}