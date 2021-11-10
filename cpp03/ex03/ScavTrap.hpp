#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap(void);

	void guardGate(void);
};