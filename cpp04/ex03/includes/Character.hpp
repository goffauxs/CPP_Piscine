#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	// Constructors
	Character(const std::string& name);
	Character(const Character& other);
	
	// Assignment operator overload
	Character& operator=(const Character& rhs);

	// Destructor
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string _name;
	AMateria* _materia[4];
};