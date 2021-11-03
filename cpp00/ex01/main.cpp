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
	std::cout << "Last name: ";
	std::cin >> str;
	contact.setLastName(str);
	std::cout << "Nickname: ";
	std::cin >> str;
	contact.setNickName(str);
	std::cout << "Phone number: ";
	std::cin >> str;
	contact.setPhoneNumber(str);
	std::cout << "Darkest secret: ";
	std::cin >> str;
	contact.setSecret(str);
	phonebook->setContact(contact);
}

std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void searchContact(Phonebook *phonebook)
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "|" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i=0; i < phonebook->getCount(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contact.getFirstName());
		std::cout << "|" << std::setw(10) << truncate(contact.getLastName());
		std::cout << "|" << std::setw(10) << truncate(contact.getNickName()) << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
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
		std::cout << std::endl << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
		{
			addContact(&phonebook);
		}
		else if (command == "SEARCH")
		{
			searchContact(&phonebook);
		}
		else if (command == "EXIT" || command == "")
		{
			break;
		}
	}
}