#include "Zombie.hpp"

Zombie::Zombie(){
};

Zombie::Zombie(std::string const& name): _name(name){
};

Zombie::~Zombie(){
	std::cout << "💥🌋" << _name << " destroyed!" << std::endl;
};

void Zombie::setName(std::string const& name){
	_name = name;
};

void Zombie::announce(){
	std::cout << "<" << _name << "> Braiiiiiiinnnssss..." << std::endl;
};

