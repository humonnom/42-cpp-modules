#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(std::string const& type){
	setZombieType(type);
};

void ZombieEvent::setZombieType(std::string const& type){
	_type = type;
};

Zombie* ZombieEvent::newZombie(std::string const& name){
	return (new Zombie(_type, name));
};

void ZombieEvent::randomChump(std::string const& name){
	Zombie zombie(_type, name);
	zombie.announce();
};