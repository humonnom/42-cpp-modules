#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <random>
#include <string>
#include "Zombie.hpp"

class ZombieEvent{
	static std::string name_pool[100];

	public:
	void setZombieType();
	//create new zombie
	Zombie* newZombie(std::string name);
	//create new zombie
	Zombie* ramdomChump();
};



#endif