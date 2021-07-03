#include <ZombieEvent.hpp>

std::string ZombieEvent::_name_pool[Z_MAX] = {
	"Jean-Luc Picard",
	"William T. Riker",
	"Data",
	"Geordi La Forge",
	"Beverly Crusher",
	"Deanna Troi",
	"Worf",
	"Q",
	"Miles O'brien",
	"Wesley Crusher",
	"Tasha Yar",
	"Worf",
	"Katherine Pulaski",
	"Guinan",
	"Lwaxana Troi",
	"Ro Laren"
};

ZombieEvent::ZombieEvent(std::string const& type){
	setZombieType(type);
};

void ZombieEvent::setZombieType(std::string const& type){
	_type = type;
};

Zombie* ZombieEvent::newZombie(std::string const& name){
	return (new Zombie(_type, name));
};

Zombie* ZombieEvent::ramdomChump(){
	std::string name;
	std::random_device r_device;
  	std::mt19937 r_engine(r_device());
	std::uniform_int_distribution<int> dis(0, Z_MAX - 1);
	name = _name_pool[dis(r_engine)];
	return (newZombie(name));
};