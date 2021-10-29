#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

std::string Contact::getNickName() const
{
	return this->_nickName;
}

std::string Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string Contact::getSecret() const
{
	return this->_secret;
}

void Contact::setFirstName(std::string name)
{
	this->_firstName = name;
	return;
}

void Contact::setLastName(std::string name)
{
	this->_lastName = name;
	return;
}

void Contact::setNickName(std::string name)
{
	this->_nickName = name;
	return;
}

void Contact::setPhoneNumber(std::string number)
{
	this->_phoneNumber = number;
	return;
}

void Contact::setSecret(std::string secret)
{
	this->_secret = secret;
	return;
}