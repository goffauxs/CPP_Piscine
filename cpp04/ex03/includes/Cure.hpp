#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	// Constructors
	Cure();
	Cure(const Cure& other);

	// Assignment operator overload
	Cure& operator=(const Cure& rhs);

	// Destructor
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};