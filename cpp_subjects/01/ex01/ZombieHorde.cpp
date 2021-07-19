#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int n, std::string name){
	Zombie* zombies[n];
	for(int i = 0; i < n; i++)
	{
		zombies[i] = new Zombie(_type, name);
	}
	return (zombies[0]);
};

void Zombie::announceAll(Zombie* zombies, int zombie_num){
	for(int i = 0; i < zombie_num; i++)
	{
		zombies[i].announce();
	}
};