#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
	std::string type;

	public:
	Weapon();
	Weapon(std::string const& type_input);
	std::string const& getType() const;
	void setType(std::string const& type_input);
};

#endif