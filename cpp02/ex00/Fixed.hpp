class Fixed
{
public:
	// Constructors
	Fixed();
	Fixed(const Fixed& other);

	// Assignment operator overload
	Fixed& operator=(const Fixed& rhs);

	// Destructor
	~Fixed();

	// Getter
	int getRawBits(void) const;

	// Setter
	void setRawBits(int const raw);

private:
	static int const fraction = 8;
	int _fixedPoint;
};