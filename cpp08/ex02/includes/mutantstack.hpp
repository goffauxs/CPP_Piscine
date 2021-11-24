#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	// Constructors
	MutantStack();
	MutantStack(const MutantStack<T>& other);

	// Assignment operator overload
	MutantStack<T>& operator=(const MutantStack<T>& rhs);

	// Destructor
	~MutantStack();

	typedef T*			iterator;
	typedef T* const	const_iterator;

	iterator		begin();
	iterator		end();
	const_iterator	cbegin();
	const_iterator	cend();
};