#include "Zombie.hpp"

Zombie::Zombie(std::string const& name): _name(name){
};

Zombie::~Zombie(){
	std::cout << "💥🌋" << _name << " destroyed!" << std::endl;
};

void Zombie::announce(){
	std::cout << "<" << _name << "> Braiiiiiiinnnssss..." << std::endl;
};

