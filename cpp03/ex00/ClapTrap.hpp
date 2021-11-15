#pragma once
#include <string>

class ClapTrap
{
public:
	// Constructors/Destructor
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);

	ClapTrap& operator=(const ClapTrap& rhs);

	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_ad;
};