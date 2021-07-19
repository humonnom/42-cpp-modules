#include "HumanA.hpp"



HumanA::HumanA(std::string const& name_input, Weapon const& weapon_input)
: name(name_input), weapon(weapon_input){};

void HumanA::attack() const {
	std::cout << name << " attacks with his" << weapon.getType() << std::endl;
};