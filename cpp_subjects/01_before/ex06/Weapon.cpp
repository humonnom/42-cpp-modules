#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string const& type_input)
: type(type_input){};

std::string const& Weapon::getType() const{
	return (type);
};

void Weapon::setType(std::string const& type_input){
	type = type_input;
};