#include "mutantstack.hpp"
#include <iostream>

int main()
{
	std::cout << "--- PDF example ---" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "--- Reverse iterator ---" << std::endl;

	MutantStack<std::string> rev;

	rev.push("one");
	rev.push("two");
	rev.push("three");
	rev.push("four");
	rev.push("five");

	MutantStack<std::string>::reverse_iterator rev_itr = rev.rbegin();
	for (; rev_itr != rev.rend(); rev_itr++)
		std::cout << *rev_itr << std::endl;

	std::cout << "--- Copy constructor ---" << std::endl;

	MutantStack<int> copy(mstack);
	MutantStack<int> a_copy = mstack;

	copy.pop();
	copy.pop();
	copy.pop();
	copy.push(64);
	copy.push(65);
	copy.push(66);

	MutantStack<int>::iterator copy_itr = copy.begin();
	for (; copy_itr != copy.end(); copy_itr++)
		std::cout << *copy_itr << std::endl;

	std::cout << "--- Assignment operator ---" << std::endl;

	a_copy.pop();
	a_copy.pop();
	a_copy.pop();
	a_copy.push(128);
	a_copy.push(129);
	a_copy.push(130);

	MutantStack<int>::iterator a_copy_itr = a_copy.begin();
	for (; a_copy_itr != a_copy.end(); a_copy_itr++)
		std::cout << *a_copy_itr << std::endl;

	return 0;
}