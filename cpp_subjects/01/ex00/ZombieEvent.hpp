#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <random>
#include <string>
#include "Zombie.hpp"
#define Z_MAX 16

class ZombieEvent{
	std::string _type;

	public:
	ZombieEvent(std::string const& type);
	void setZombieType(std::string const& type);
	Zombie* newZombie(std::string const& name);
	void randomChump(std::string const& name);
};

#endif