#include <string>

class Zombie
{
public:

	// Constructor/Destructor
	Zombie(std::string name);
	~Zombie(void);

	// Getters
	void announce( void ) const;
private:

	std::string _name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);