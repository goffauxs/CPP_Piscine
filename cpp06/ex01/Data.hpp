#pragma once
#include <string>

typedef struct
{
	std::string	firstName;
	std::string lastName;
	std::string nickname;
	int			age;
	double		level;
} Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
