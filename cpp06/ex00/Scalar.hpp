#include <string>
#include <iostream>

class Scalar
{
public:
	// Constructors
	Scalar();
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

private:

	const std::string& _string;
};

std::ostream& operator<<(std::ostream& o, const Scalar& rhs);