#include "Zombie.hpp"

int main()
{
	int const count = 42;
	Zombie *horde = zombieHorde(count, "zombie");

	for (int i = 0; i < count; i++)
		horde[i].announce();
	delete [] horde;
}