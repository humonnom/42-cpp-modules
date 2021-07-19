#include "Karen.hpp"

void Karen::debug(void){
	std::cout << "I want to climb that one. I think I should start with little yellow one, and move to another blue one over there..." << std::endl;
};

void Karen::info(void){
	std::cout << "These blue rocks look very good, but that red one looks very slippery." << std::endl;
};

void Karen::warning(void){
	std::cout << "'Creak' " << std::endl;
};

void Karen::error(void){
	std::cout << "'Boom!!'" << std::endl;
};

void Karen::invalid(void){
	std::cout << "<< invalid comment >>" << std::endl;
}

void Karen::complain(std::string level){
	void(Karen::*func)(void);
	func = &Karen::invalid;
	(level.compare("DEBUG") == 0 )&& (func = &Karen::debug);
	(level.compare("INFO") == 0 )&& (func = &Karen::info);
	(level.compare("WARNING") == 0 )&& (func = &Karen::warning);
	(level.compare("ERROR") == 0 )&& (func = &Karen::error);
	(this->*func) ();
};