#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main(){
	ZombieHorde guest(2);
	ZombieHorde cadet("CADET", 6);
	ZombieHorde ensign("ENSIGN", 5);
	ZombieHorde commander("COMMANDER", 3);
	ZombieHorde lieutenant("LIEUTENANT", 2);
	ZombieHorde captain("CAPTAIN", 1);
	ZombieHorde admiral("ADMIRAL", 1);

	cadet.announce();
	ensign.announce();
	commander.announce();
	lieutenant.announce();
	captain.announce();
	admiral.announce();
	guest.announce();
}