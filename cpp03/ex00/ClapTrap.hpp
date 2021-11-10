#include <string>

class ClapTrap
{
public:
	// Constructors/Destructor
	ClapTrap(std::string name);
	~ClapTrap(void);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_ad;
};