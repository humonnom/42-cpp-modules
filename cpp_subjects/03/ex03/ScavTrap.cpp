#include "ScavTrap.hpp"

#include <iostream>

#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "생성자 동작(constructor called): S" << std::endl;
  hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
};

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
  std::cout << "생성자 동작(constructor called): S" << std::endl;
  hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
};

ScavTrap::ScavTrap(ScavTrap const &other) {
  std::cout << "복사 생성자 동작(copy constructor called): S" << std::endl;
  *this = other;
};

ScavTrap::~ScavTrap() {
  std::cout << "소멸자 동작(destructor called): S" << std::endl;
};

// operator
ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
  std::cout << "대입연산자 오버로드(copy assignment operator): S" << std::endl;
  if (this != &other) {
    name_ = other.getName();
    attack_damage_ = other.getAttackDamage();
    hit_points_ = other.getHitPoints();
    energy_points_ = other.getEnergyPoints();
  }
  return *this;
};

// overriding
void ScavTrap::attack(std::string const &target) {
  std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing "
            << attack_damage_ << " points of damage!" << std::endl;
};

// new function
void ScavTrap::guardGate() {
  std::cout << name_ << "has entered Gate keeper mode." << std::endl;
};