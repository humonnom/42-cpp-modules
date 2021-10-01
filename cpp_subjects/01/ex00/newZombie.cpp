#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string const& name){
	// create zombie in heap
	return (new Zombie(name));
};