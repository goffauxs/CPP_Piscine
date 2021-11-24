#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	// Constructors
	MutantStack();
	MutantStack(const MutantStack<T, Container>& other);

	// Assignment operator overload
	MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs);

	// Destructor
	~MutantStack();

	typedef typename Container::iterator				iterator;
	typedef typename Container::const_iterator			const_iterator;
	typedef typename Container::reverse_iterator		reverse_iterator;
	typedef typename Container::const_reverse_iterator	const_reverse_iterator;

	iterator				begin();
	iterator				end();
	const_iterator			cbegin() const;
	const_iterator			cend() const;
	reverse_iterator		rbegin();
	reverse_iterator		rend();
	const_reverse_iterator	crbegin() const;
	const_reverse_iterator	crend() const;
};