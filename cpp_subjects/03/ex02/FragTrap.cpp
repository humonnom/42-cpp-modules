#include "FragTrap.hpp"

#include <iostream>

#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "생성자 동작(constructor called): F" << std::endl;
    hit_points_ = 100;
    energy_points_ = 100;
    attack_damage_ = 30;
};

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    std::cout << "생성자 동작(constructor called): F" << std::endl;
    hit_points_ = 100;
    energy_points_ = 100;
    attack_damage_ = 30;
};

FragTrap::FragTrap(FragTrap const &other) {
    std::cout << "복사 생성자 동작(copy constructor called): F" << std::endl;
    *this = other;
};

FragTrap::~FragTrap() {
    std::cout << "소멸자 동작(destructor called): F" << std::endl;
};

// operator
FragTrap &FragTrap::operator=(FragTrap const &other) {
    std::cout << "대입연산자 오버로드(copy assignment operator): F" << std::endl;
    if (this != &other) {
        name_ = other.getName();
        attack_damage_ = other.getAttackDamage();
        hit_points_ = other.getHitPoints();
        energy_points_ = other.getEnergyPoints();
    }
    return *this;
};

// new function
void FragTrap::highFivesGuys() {
    std::cout << name_ << " says: 'Give me five!'" << std::endl;
};