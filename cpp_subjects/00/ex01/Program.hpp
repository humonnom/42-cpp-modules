#ifndef PROGRAM_HPP
#define PROGRAM_HPP

# include <iostream>
# include <string>
# include "PhoneBook.hpp"
# include "Contact.hpp"

# define ELEMENT_NUM 11
# define MAX_CONTACT_NUM 8

class Program{
	PhoneBook _pb;
	std::string _buffer;

	public:
	int programLoop(void);
	void printSeletedContactCommand(void);
};

#endif