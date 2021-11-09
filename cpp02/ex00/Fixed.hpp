class Fixed
{
public:
	// Constructors/Destructors
	Fixed(void);							//Constructor
	Fixed(Fixed& const fixed);				//Copy constructor
	~Fixed(void);							//Destructor

	Fixed& operator=(Fixed& const rhs);	//Assignment operator overload

	// Getters
	int getRawBits(void) const;

	// Setters
	void setRawBits(int const raw);

private:
	static int const fraction = 8;
	int _fixedPoint;
};