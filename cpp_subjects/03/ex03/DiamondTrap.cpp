#include "DiamondTrap.hpp"

#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("undifined_clap_name"), FragTrap(), ScavTrap() {
  std::cout << "생성자 동작(constructor called): D" << std::endl;
  name_ = "undifined";
  // hit_points_ = FragTrap::hit_points_;
  // energy_points_ = ScavTrap::energy_points_;
  // attack_damage_ = FragTrap::attack_damage_;
};

DiamondTrap::DiamondTrap(std::string const &name)
    : ClapTrap(name + "_calp_name"), FragTrap(name), ScavTrap(name) {
  std::cout << "생성자 동작(constructor called): D" << std::endl;
  name_ = name;
  // hit_points_ = FragTrap::hit_points_;
  // energy_points_ = ScavTrap::energy_points_;
  // attack_damage_ = FragTrap::attack_damage_;
};

DiamondTrap::DiamondTrap(DiamondTrap const &other) {
  std::cout << "복사 생성자 동작(copy constructor called): D" << std::endl;
  *this = other;
};

DiamondTrap::~DiamondTrap() {
  std::cout << "소멸자 동작(destructor called): D" << std::endl;
};

// operator
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {
  std::cout << "대입연산자 오버로드(copy assignment operator): D" << std::endl;
  if (this != &other) {
    name_ = other.getName();
    attack_damage_ = other.getAttackDamage();
    hit_points_ = other.getHitPoints();
    energy_points_ = other.getEnergyPoints();
  }
  return *this;
};

// new function
void DiamondTrap::whoAmI() {
  std::cout << "----w---h---o-------a----m---------i----" << std::endl;
  std::cout << " name:\t\t\t" << name_ << std::endl;
  std::cout << " ClapTrap::name:\t" << ClapTrap::name_ << std::endl;
  std::cout << "----------------------------------------" << std::endl;
};