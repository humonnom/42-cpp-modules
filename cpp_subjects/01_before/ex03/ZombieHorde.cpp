#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n){
	createZombies("GUEST", n);
};

ZombieHorde::ZombieHorde(std::string const& type, int n){
	createZombies(type, n);
};

void ZombieHorde::createZombies(std::string const& type, int n){
	zombies = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		zombies[i].setRandomName();
		zombies[i].setType(type);
	}
	zombie_num = n;
};

void ZombieHorde::announce(){
	for(int i = 0; i < zombie_num; i++)
	{
		zombies[i].announce();
	}
};

ZombieHorde::~ZombieHorde(){
	delete[] zombies;
};