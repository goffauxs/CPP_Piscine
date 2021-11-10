#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:

	FragTrap(std::string name);
	~FragTrap(void);

	void highFivesGuys(void);
};