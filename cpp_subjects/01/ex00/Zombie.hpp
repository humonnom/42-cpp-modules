#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <random>
#include <string>
#define Z_MAX 16


class Zombie{
	std::string _name;

	public:
	Zombie(std::string const& name);
	~Zombie();
	Zombie* newZombie(std::string const& name);
	void randomChump(std::string const& name);
	void announce();
};

#endif