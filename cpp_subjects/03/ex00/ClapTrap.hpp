#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
   private:
    std::string name;
    int hitpoints;
    int energy_pointsd;
    int attack_damage;

   public:
    ClapTrap();
    ClapTrap(std::string name_);
    ~ClapTrap();
    ClapTrap(ClapTrap const &other);
    ClapTrap &operator=(ClapTrap const &other);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif