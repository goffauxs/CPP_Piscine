#include <algorithm>

class ElementNotFoundException : public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Element not found in container");
	}
};

template <class T>
typename T::iterator easyfind(T& container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it != container.end())
		return it;
	else
		throw ElementNotFoundException();
}