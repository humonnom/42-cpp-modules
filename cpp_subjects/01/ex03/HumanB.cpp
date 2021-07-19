#include "HumanB.hpp"

HumanB::HumanB(std::string const& name_input)
: name(name_input){
	weapon = NULL;
};

HumanB::HumanB(std::string const& name_input, Weapon const& weapon_input)
: name(name_input), weapon(&weapon_input){};

void HumanB::attack() const{
	if (!weapon)
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon const& weapon_input){
	weapon = &weapon_input;
};
