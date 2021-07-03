#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <string>

class ZombieHorde{
	Zombie *zombies;
	int	zombie_num;

	public:
	ZombieHorde(int n);
	ZombieHorde(std::string const& type, int n);
	~ZombieHorde();
	void createZombies(std::string const& type, int n);
	void announce();
};

#endif