#include <iostream>
#include <bitset>
#include "Data.hpp"

int main()
{
	Data input;

	input.firstName = "Simon";
	input.lastName = "Goffaux";
	input.nickname = "sgoffaux";
	input.age = 26;
	input.level = 4.55;

	std::cout << "first name: " << input.firstName << std::endl;
	std::cout << "last name: " << input.lastName << std::endl;
	std::cout << "nickname: " << input.nickname << std::endl;
	std::cout << "age: " << input.age << std::endl;
	std::cout << "level: " << input.level << std::endl;

	std::cout << "------------------------" << std::endl;

	uintptr_t output_uintptr = serialize(&input);

	Data* output = deserialize(output_uintptr);

	std::cout << "first name: " << output->firstName << std::endl;
	std::cout << "last name: " << output->lastName << std::endl;
	std::cout << "nickname: " << output->nickname << std::endl;
	std::cout << "age: " << output->age << std::endl;
	std::cout << "level: " << output->level << std::endl;
}