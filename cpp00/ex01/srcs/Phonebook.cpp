#include "Phonebook.hpp"

Phonebook::Phonebook()
: _index(0), _count(0)
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

Contact Phonebook::getContact(int index) const
{
	return this->_contacts[index];
}

int	Phonebook::getCount() const
{
	return this->_count;
}

// int	Phonebook::getIndex() const
// {
// 	return this->_index;
// }

void Phonebook::setContact(Contact contact)
{
	this->_contacts[this->_index] = contact;
	this->_count = (_count < 8) ? _count + 1 : _count;
	this->_index = (this->_index + 1) % 8;
	return;
}