#include "Contact.hpp"

std::string Contact::keys[ELEMENT_NUM] = {
	"first name", 
	"last name", 
	"nickname", 
	"login", 
	"postal address", 
	"email address", 
	"phone number", 
	"birthday date", 
	"favorite meal", 
	"underwear color",
	"darkest secret"
};

int Contact::hasKeyword(std::string keyword){
	for (int i = 0; i < ELEMENT_NUM; i++){
		if (vals[i] == keyword)
			return (1);
	}
	return (0);
};

std::string Contact::cutStrLen(std::string src){
	if (src.length() <= 10)
		return (src);
	else
		return ((src.substr(0, 9)) + ".");
};

void Contact::printHeaderKeys(){
	std::cout << std::setw(10) << "id";
	for (int i = 0; i <= Nickname; i++){
		std::cout << "|" << std::setw(10) << cutStrLen(keys[i]);
	};
	std::cout << "\n----------+----------+----------+----------" << std::endl;
};

int Contact::hasEmptyHeader(){
	for (int i = 0; i <= Nickname; i++){
		if (vals[i] == "")
			return (1);
	};
	return (0);
};

void Contact::printHeader(int id){
	if (hasEmptyHeader())
		return ;
	std::cout << std::setw(10) << id;
	for (int i = 0; i <= Nickname; i++){
		std::cout << "|" << std::setw(10) << cutStrLen(vals[i]);
	};
	std::cout << "\n----------+----------+----------+----------" << std::endl;
};

void Contact::printSeletedContact(){
	std::cout << "\n+-[c][o][n][t][a][c][t]-+" << std::endl;
	for (int i = 0; i < ELEMENT_NUM; i++){
		std::cout << "▻ " << keys[i] << ": " << vals[i] << std::endl; 
	};
	std::cout << "+-----------------------+" << std::endl;
};

void Contact::setVals(){
	for (int i = 0; i < ELEMENT_NUM; i++){
		std::string buffer;
		std::cout << keys[i] << ": ";
		std::getline(std::cin, buffer);
		vals[i].append(buffer);
	}
};