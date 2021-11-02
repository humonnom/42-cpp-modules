#include "ClapTrap.hpp"

#include <iostream>
#include <string>

// constructor & destuctor
ClapTrap::ClapTrap() : name_(""), hit_points_(10), energy_points_(10), attack_damage_(0) {
    std::cout << "생성자 동작(constructor called)" << std::endl;
};

ClapTrap::ClapTrap(std::string const &name) : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
    std::cout << "생성자 동작(constructor called)" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &other) {
    std::cout << "복사 생성자 동작(copy constructor called)" << std::endl;
    *this = other;
};

ClapTrap::~ClapTrap() {
    std::cout << "소멸자 동작(destructor called)" << std::endl;
};

// operator
ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
    std::cout << "대입연산자 오버로드(copy assignment operator)" << std::endl;
    if (this != &other) {
        name_ = other.name_;
        hit_points_ = other.hit_points_;
        energy_points_ = other.energy_points_;
        attack_damage_ = other.attack_damage_;
    }
    return *this;
};

// member functions to play
void ClapTrap::attack(std::string const &target) {
    std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= hit_points_) {
        std::cout << "ClapTrap " << name_ << " is dead...!" << std::endl;
        hit_points_ = 0;
        return;
    }
    std::cout << "ClapTrap " << name_ << " loose its energy by " << amount << "!" << std::endl;
    hit_points_ -= amount;
};

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount > energy_points_) {
        std::cout << "ClapTrap " << name_ << "'s energy recovery : FAILED" << amount << "!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name_ << " recovered its energy by " << amount << "!" << std::endl;
    energy_points_ -= amount;
    hit_points_ += amount;
};

std::string &ClapTrap::getName() {
    return name_;
};

unsigned int ClapTrap::getAttackDamage() {
    return attack_damage_;
};
