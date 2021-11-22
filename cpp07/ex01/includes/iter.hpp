#include <iostream>

template <typename T, typename F>
void iter(T* array, int length, F f)
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void print_normal(const T& a)
{
	std::cout << a << std::endl;
}