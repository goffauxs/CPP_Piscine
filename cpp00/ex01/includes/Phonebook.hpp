#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
public:

	// Constructors & Destructor
	Phonebook();
	~Phonebook();

	// Getters
	Contact getContact(int index) const;
	int		getCount() const;

	// Setters
	void setContact(Contact contact);

private:

	Contact _contacts[8];
	int		_index;
	int		_count;
};

#endif