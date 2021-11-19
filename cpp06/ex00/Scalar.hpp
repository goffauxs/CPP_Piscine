#include <string>
#include <iostream>

class Scalar
{
public:
	// Constructors
	Scalar(const std::string& string);
	Scalar(const Scalar& other);

	// Assignment operator overload
	Scalar& operator=(const Scalar& rhs);

	// Destructor
	~Scalar();

	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;

	class InvalidInput : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Invalid input");
		}
	};

	class Impossible : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Impossible");
		}
	};

	class NonDisplayable : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Non displayable");
		}
	};

private:

	const std::string&	_string;
	char				_charVal;
	int					_intVal;
	float				_floatVal;
	double				_doubleVal;
	enum scalarType {charType, intType, floatType, doubleType} _type;
};

std::ostream& operator<<(std::ostream& o, const Scalar& rhs);