#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{
	std::string const& name;
	Weapon const& weapon;

	public:
	HumanA(std::string const& name, Weapon const& weapon_input);
	void attack() const;
};

#endif