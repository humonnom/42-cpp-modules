#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string _type;
	std::string _name;

	public:
	Zombie(std::string const& type, std::string const& name);
	void announce();
};

#endif