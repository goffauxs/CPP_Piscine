#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);

	ScavTrap& operator=(const ScavTrap& rhs);

	~ScavTrap();

	void guardGate();
};