#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

#define ELEMENT_NUM 11
#define MAX_CONTACT_NUM 8

class Contact
{
	static std::string keys[ELEMENT_NUM];
	std::string vals[ELEMENT_NUM];

	enum keys_id
	{
		FirstName = 0,
		LastName,
		Nickname,
		Login,
		PostalAddress,
		EmailAddress,
		PhoneNumber,
		BirthdayDate,
		FavoriteMeal,
		UnderwearColor,
		DarkestSecret
	};

public:
	int hasEmptyHeader();
	void printHeader(int id);
	static void printHeaderKeys();
	int hasKeyword(std::string keyword);
	static std::string cutStrLen(std::string src);
	void printSeletedContact();
	void setVals();
};

#endif