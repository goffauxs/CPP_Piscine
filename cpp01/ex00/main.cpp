#include "Zombie.hpp"

int main()
{
	Zombie zombie1("zombie1");
	Zombie *zombie2 = newZombie("zombie2");
	zombie2->announce();
	randomChump("zombie3");
	delete zombie2;
}