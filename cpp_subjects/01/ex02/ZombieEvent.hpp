#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent{
	public:

	void setZombieType();
	//create new zombie
	Zombie* newZombie(std::string name);
	//create new zombie
	Zombie* ramdomChump();
};



#endif