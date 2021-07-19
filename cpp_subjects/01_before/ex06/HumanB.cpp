#include "HumanB.hpp"

HumanB::HumanB(std::string const& name_input)
: name(name_input){};

HumanB::HumanB(std::string const& name_input, Weapon const& weapon_input)
: name(name_input), weapon(&weapon_input){};

void HumanB::attack() const{
	std::cout << name << " attacks with his" << weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon const& weapon_input){
	weapon = &weapon_input;
};
