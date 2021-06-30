#include "Pony.hpp"

Pony::~Pony(){
	std::cout << _name << " is deleted " << std::endl;
};

void Pony::sniff(){
	std::cout << _name << ": `Sniff, sniff…`" << std::endl;
};

void Pony::takeANap(){
	std::cout << _name << " is taking a nap" << std::endl;
};

void Pony::run(){
	std::cout << _name << " is running" << std::endl;
};
