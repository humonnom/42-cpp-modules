#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie*	stars[Z_MAX];
	Zombie*	treks[Z_MAX];

	ZombieEvent star("star");
	for (int i = 0; i < Z_MAX; i++){
		stars[i] = star.ramdomChump();
	}
	ZombieEvent trek("trek");
	for (int i = 0; i < Z_MAX; i++){
		treks[i] = trek.ramdomChump();
	}
	//delete
	for (int i = 0; i < Z_MAX; i++){
		delete stars[i];
	}

	for (int i = 0; i < Z_MAX; i++){
		delete treks[i];
	}	
}