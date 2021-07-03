#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB{
	std::string const& name;
	Weapon const* weapon;

	public:
	HumanB(std::string const& name_input);
	HumanB(std::string const& name, Weapon const& weapon_input);
	void attack() const;
	void setWeapon(Weapon const& weapon_input);
};

#endif