#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	// Constructors
	Ice();
	Ice(const Ice& other);

	// Assignment operator overload
	Ice& operator=(const Ice& rhs);

	// Destructor
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};