#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

void addContact(Phonebook *phonebook)
{
	Contact 	contact;
	std::string str;

	std::cout << "First name: ";
	std::cin >> str;
	contact.setFirstName(str);
	std::cout << std::endl << "Last name: ";
	std::cin >> str;
	contact.setLastName(str);
	std::cout << std::endl << "Nickname: ";
	std::cin >> str;
	contact.setNickName(str);
	std::cout << std::endl << "Phone number: ";
	std::cin >> str;
	contact.setPhoneNumber(str);
	std::cout << std::endl << "Darkest secret: ";
	std::cin >> str;
	contact.setSecret(str);
	phonebook->setContact(contact);
}

void searchContact(Phonebook *phonebook)
{
	for (int i=0; i < phonebook->getCount(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << contact.getFirstName() << "|";
		std::cout << contact.getLastName()
	}
}

int main()
{
	Phonebook phonebook;

	std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << std::endl;
	while (1)
	{
		std::string command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (!command.compare("ADD"))
		{
			addContact(&phonebook);
		}
		else if (!command.compare("SEARCH"))
		{
			searchContact(&phonebook);
		}
		else if (!command.compare("EXIT"))
		{
			break;
		}
	}
}