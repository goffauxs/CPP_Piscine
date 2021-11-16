#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	
	// Assignment operator overload
	MateriaSource& operator=(const MateriaSource& rhs);

	// Destructor
	~MateriaSource();

	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& type);

private:

	AMateria* _materia[4];
};
