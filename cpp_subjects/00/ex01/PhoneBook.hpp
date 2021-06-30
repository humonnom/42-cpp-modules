#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

# define ELEMENT_NUM 11
# define MAX_CONTACT_NUM 8

class PhoneBook{
	Contact _contact[MAX_CONTACT_NUM];
	int		_contact_num;

	public:
	PhoneBook(void);
	void add(void);
	void search(void);
	void printIdList(void);
};

#endif