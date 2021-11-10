#include <iostream>

class Fixed
{
public:
	// Constructors/Destructors
	Fixed(void);							//Constructor
	Fixed(int const val);
	Fixed(float const val);
	Fixed(const Fixed& fixed);				//Copy constructor
	~Fixed(void);							//Destructor

	Fixed& operator=(const Fixed& rhs);		//Assignment operator

	//Comparison operators
	bool operator>(const Fixed& rhs);		//Greater than operator
	bool operator<(const Fixed& rhs);		//Less than operator
	bool operator>=(const Fixed& rhs);		//Greater than or equal to operator
	bool operator<=(const Fixed& rhs);		//Less than or equal to operator
	bool operator==(const Fixed& rhs);		//Equal to operator
	bool operator!=(const Fixed& rhs);		//Not equal to operator

	//Arithmetic operators
	Fixed operator+(const Fixed& rhs);		//Addition operator
	Fixed operator-(const Fixed& rhs);		//Subtraction operator
	Fixed operator*(const Fixed& rhs);		//Multiplication operator
	Fixed operator/(const Fixed& rhs);		//Division operator

	//Unary increment/decrement operators
	Fixed& operator++();					//Prefix increment operator
	Fixed& operator--();					//Prefix decrement operator
	Fixed operator++(int);					//Postfix increment operator
	Fixed operator--(int);					//Postfix decrement operator

	// Getters
	int getRawBits(void) const;

	// Setters
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
	static			Fixed& min(Fixed& a, Fixed& b);
	static const	Fixed& min(const Fixed& a, const Fixed& b);
	static			Fixed& max(Fixed& a, Fixed& b);
	static const	Fixed& max(const Fixed& a, const Fixed& b);

private:
	static int const fraction = 8;
	int _fixedPoint;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);