#include <string>

class Zombie
{
public:

	// Constructor/Destructor
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	// Setters
	void setName(std::string name);

	// Getters
	void announce( void ) const;

private:

	std::string _name;
};

Zombie *zombieHorde(int N, std::string name);