#include "ClapTrap.hpp"

#include <iostream>
#include <string>
ClapTrap::ClapTrap(): name_(""),hitpoints_(10),energy_points_(10),attack_damage_(0){
    std::cout << "생성자 동작" << std::endl;
};

ClapTrap::ClapTrap(std::string name): name_(name),hitpoints_(10),energy_points_(10),attack_damage_(0) {
    std::cout << "생성자 동작(매개변수: name)" << std::endl;
};


ClapTrap::ClapTrap(ClapTrap const &other){
    std::cout << "복사 생성자 동작" << std::endl;
//  복사생성자
};

ClapTrap::~ClapTrap(){
    std::cout << "소멸자 동작" << std::endl;
//소멸자
};

void ClapTrap::attack(std::string const &target) {
    std::cout << "attack 멤버 함수 동작" << std::endl;
    std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name_ << " loose " << amount << " energy points." << std::endl;
    energy_points_ -= amount;
};

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << name_ << " get " << amount << " energy points." << std::endl;
    energy_points_ += amount;
};

ClapTrap &ClapTrap::operator=(ClapTrap const &other){
    std::cout << "대입연산자 오버로드" << std::endl;
//  대입연산자 오버로드
};