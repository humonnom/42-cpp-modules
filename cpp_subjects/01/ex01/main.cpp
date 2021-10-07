#include "Zombie.hpp"
#define CADET_NUM 0
#define ENSIGN_NUM 1
#define COMMANDER_NUM 1
#define LIEUTENANT_NUM 2
#define CAPTAIN_NUM 3

int main()
{
	Zombie cadet("jlee");
	Zombie *cadets = cadet.zombieHorde(CADET_NUM, "Cadet Juepark");
	Zombie *ensigns = cadet.zombieHorde(ENSIGN_NUM, "Ensign Sato");
	Zombie *commanders = cadet.zombieHorde(COMMANDER_NUM, "Commander Riker");
	Zombie *lieutenants = cadet.zombieHorde(LIEUTENANT_NUM, "Lieutenant yar");
	Zombie *captains = cadet.zombieHorde(CAPTAIN_NUM, "Captain Janeway");

	std::cout << "jlee attacked a lot.." << std::endl;

	// announce all
	for (int i = 0; i < CADET_NUM; i++)
	{
		cadets[i].announce();
	}
	for (int i = 0; i < ENSIGN_NUM; i++)
	{
		ensigns[i].announce();
	}
	for (int i = 0; i < COMMANDER_NUM; i++)
	{
		commanders[i].announce();
	}
	for (int i = 0; i < LIEUTENANT_NUM; i++)
	{
		lieutenants[i].announce();
	}
	for (int i = 0; i < CAPTAIN_NUM; i++)
	{
		captains[i].announce();
	}

	//delete all
	delete[] cadets;
	delete[] ensigns;
	delete[] commanders;
	delete[] lieutenants;
	delete[] captains;
}