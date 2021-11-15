#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);

	DiamondTrap& operator=(const DiamondTrap& rhs);

	~DiamondTrap();

	void attack(std::string const & target);
	void whoAmI();

private:
	std::string _name;
};