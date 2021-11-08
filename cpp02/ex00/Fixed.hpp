class Fixed
{
public:
	// Constructors/Destructors
	Fixed(void);
	Fixed(const Fixed& fixed);
	Fixed& operator= (const Fixed& fixed);
	~Fixed(void);

	// Getters
	int getRawBits(void) const;

	// Setters
	void setRawBits(int const raw);

private:
	static int const fraction = 8;
	int _fixedPoint;
};