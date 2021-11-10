#include "ClapTrap.hpp"

int main()
{
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");

	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
}