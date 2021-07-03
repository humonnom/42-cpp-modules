#include "Zombie.hpp"

std::string Zombie::_name_pool[Z_MAX] = {
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

Zombie::Zombie(){
	//std::cout << "created" << std::endl;
};

Zombie::Zombie(std::string const& type, std::string const& name): _type(type), _name(name){
	announce();
};

void Zombie::announce(){
	std::cout << "<" << _name << "(" << _type << ")" << "> Braiiiiiiinnnssss..." << std::endl;
};

void Zombie::setName(std::string const& name){
	_name = name;
};

void Zombie::setType(std::string const& type){
	_type = type;
};

void Zombie::setRandomName(){
	std::random_device r_device;
  	std::mt19937 r_engine(r_device());
	std::uniform_int_distribution<int> dis(0, Z_MAX - 1);
	setName(_name_pool[dis(r_engine)]);
};

Zombie::~Zombie(){
	//std::cout << "deleted" << std::endl;
};