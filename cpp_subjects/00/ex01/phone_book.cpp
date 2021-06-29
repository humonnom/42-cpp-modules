#include "mypb.hpp"

PhoneBook::PhoneBook(void){
	_contact_num = 0;
};

void PhoneBook::add(void){
	if (_contact_num == MAX_CONTACT_NUM)
		std::cout << "`no space in your phone book`" << std::endl;
	else
	{
		_contact[_contact_num].setVals(_contact_num);
		_contact_num++;
		std::cout << "`contact is added!`" << std::endl;
	}
};

void PhoneBook::search(void){
	printIdList();
	std::string keyword;
	std::cout << "Keyword: ";
	std::getline(std::cin, keyword);
	for (int i = 0; i < MAX_CONTACT_NUM; i++)
	{
		if (_contact[i].hasKeyword(keyword))
			_contact[i].printAll();
	}
	std::cout << "`There's no contact with that keyword`" << std::endl;
};

void PhoneBook::printIdList(void) {
	if (_contact_num == 0)
		std::cout << "`Your Phonebook is empty...`" << std::endl;
	else {
		std::cout << "+----+-------------+" << std::endl;
		std::cout << "[ID]" << "\t" <<  " NAME" << std::endl;
		for (int i = 0; i < _contact_num; i++)
		{
			std::cout << "+----+-------------+" << std::endl;
			std::cout << "[" << i << "]" << "\t";
			_contact[i].printName();
			std::cout << std::endl;
		}
		std::cout << "+----+-------------+" << std::endl;
	}
};