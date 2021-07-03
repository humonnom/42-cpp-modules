#include "Pony.hpp"

Pony::Pony(){
	name = "Pony";
};

Pony::Pony(std::string name_input) : name(name_input){
};

Pony::~Pony(){
	std::cout << name << " is deleted " << std::endl;
};

void Pony::sniff(){
	std::cout << name << ": `Sniff, sniff…`" << std::endl;
};

void Pony::takeANap(){
	std::cout << name << " is taking a nap" << std::endl;
};

void Pony::run(){
	std::cout << name << " is running" << std::endl;
};
