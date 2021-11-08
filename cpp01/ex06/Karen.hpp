#include <string>

class Karen
{
public:
	// Constructor/Destructor
	Karen(void);
	~Karen(void);

	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};