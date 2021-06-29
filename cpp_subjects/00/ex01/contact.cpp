#include "mypb.hpp"

std::string Contact::_keys[ELEMENT_NUM] = {
	"Unique id",
	"Full Name",
	"Intra nickname",
	"Address",
	"Age",
	"B_day",
	"Favorite Drink"
};

int Contact::hasKeyword(std::string keyword){
	for (int i = 0; i < ELEMENT_NUM; i++){
		if (_vals[i] == keyword)
			return (1);
	}
	return (0);
};

void Contact::printName(){
	std::cout << _vals[1];
};

void Contact::printAll(){
	std::cout << "+-[c][o][n][t][a][c][t]-+" << std::endl;
	for (int i = 1; i < ELEMENT_NUM; i++){
		std::cout << "▻ " << _keys[i] << ": " << _vals[i] << std::endl; 
	};
	std::cout << "+-----------------------+" << std::endl;
};

void Contact::setVals(int id){
	_vals[0].append(std::to_string(id));
	for (int i = 1; i < ELEMENT_NUM; i++){
		std::string buffer;
		std::cout << _keys[i] << ": ";
		std::getline(std::cin, buffer);
		_vals[i].append(buffer);
		std::cout << _vals[i] << std::endl;
	}
};