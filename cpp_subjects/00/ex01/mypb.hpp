#ifndef MYPB_HPP
#define MYPB_HPP

# include <iostream>
# define ELEMENT_NUM 7
# define MAX_CONTACT_NUM 8

class Contact{
	static std::string	_keys[ELEMENT_NUM];
	std::string	_vals[ELEMENT_NUM];

	public:
	void printName();
	int hasKeyword(std::string keyword);
	void printAll();
	void setVals(int id);
};

class PhoneBook{
	Contact _contact[MAX_CONTACT_NUM];
	int		_contact_num;

	public:
	PhoneBook(void);
	void add(void);
	void search(void);
	void printIdList(void);
};

class Program{
	PhoneBook _pb;
	std::string _buffer;

	public:
	int programLoop(void);
	void printAllCommand(void);
};

#endif