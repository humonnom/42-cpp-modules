#include "ClapTrap.hpp"

#include <iostream>
#include <string>
ClapTrap::ClapTrap(){

};

ClapTrap::ClapTrap(std::string name_){

};

ClapTrap::~ClapTrap(){

};

ClapTrap::ClapTrap(ClapTrap const &other){

};

ClapTrap &ClapTrap::operator=(ClapTrap const &other){

};

void ClapTrap::attack(std::string const &target) {
    std::cout << "ClapTrap" << name << "attacks" << attack_damage << ", causing" << damage << "points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){

};

void ClapTrap::beRepaired(unsigned int amount){

};
