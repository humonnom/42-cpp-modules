#include "Zombie.hpp"
#define CADET_NUM 1
#define ENSIGN_NUM 1
#define COMMANDER_NUM 1
#define LIEUTENANT_NUM 1
#define CAPTAIN_NUM 1

int main(){
	Zombie cadet("CADET", "CADET");
	Zombie* cadets = cadet.zombieHorde(CADET_NUM, "Juepark");
	Zombie ensign("ENSIGN", "ENSIGN");
	Zombie* ensigns = ensign.zombieHorde(ENSIGN_NUM, "Sato");
	Zombie commander("COMMANDER", "COMMANDER");
	Zombie* commanders = commander.zombieHorde(COMMANDER_NUM, "Riker");
	Zombie lieutenant("LIEUTENANT", "LIEUTENANT");
	Zombie* lieutenants = lieutenant.zombieHorde(LIEUTENANT_NUM, "yar");
	Zombie captain("CAPTAIN", "CAPTAIN");
	Zombie* captains = captain.zombieHorde(CAPTAIN_NUM, "Janeway");

	cadet.announceAll(cadets, CADET_NUM);
	ensign.announceAll(ensigns, ENSIGN_NUM);
	commander.announceAll(commanders, COMMANDER_NUM);
	lieutenant.announceAll(lieutenants, LIEUTENANT_NUM);
	captain.announceAll(captains, CAPTAIN_NUM);

	for (int i = 0; i < CADET_NUM; i++){
		delete &cadets[i];
	}
	for (int i = 0; i < ENSIGN_NUM; i++){
		delete &ensigns[i];
	}
	for (int i = 0; i < COMMANDER_NUM; i++){
		delete &commanders[i];
	}
	for (int i = 0; i < LIEUTENANT_NUM; i++){
		delete &lieutenants[i];
	}
	for (int i = 0; i < CAPTAIN_NUM; i++){
		delete &captains[i];
	}
}