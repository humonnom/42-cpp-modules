#include "Zombie.hpp"

void Zombie::randomChump(std::string const& name){
	//create zombie in stack
	Zombie zombie(name);
	zombie.announce();
};