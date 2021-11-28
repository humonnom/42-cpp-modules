#include "Character.hpp"

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character(std::string const& name) : ICharacter() {
    std::cout << "[ Character class ] constructor" << std::endl;
};

Character::Character(Character const& other) : ICharacter() {
    std::cout << "[ Character class ] copy constructor" << std::endl;
    *this = other;
};

Character::~Character() {
    std::cout << "[ Character class ] destructor" << std::endl;
};

std::string const& Character::getName() const {
    return name_;
};

void Character::equip(AMateria* m){

};
void Character::unequip(int idx){

};
void Character::use(int idx, Character& target){

};

// 대입연산자 오버로드
Character& Character::operator=(Character const& other) {
    std::cout << "[ Character class ] copy assignment overload" << std::endl;
    if (this != &other) name_ = other.getName();
    return *this;
};