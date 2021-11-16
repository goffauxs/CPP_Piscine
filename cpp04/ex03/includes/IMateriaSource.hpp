#pragma once
#include "AMateria.hpp"
#include <string>

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(const std::string& type) = 0;
};
