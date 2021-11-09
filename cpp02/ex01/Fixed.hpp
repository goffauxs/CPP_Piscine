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

	Fixed& operator=(const Fixed& rhs);		//Assignment operator overload

	// Getters
	int getRawBits(void) const;

	// Setters
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	static int const fraction = 8;
	int _fixedPoint;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);