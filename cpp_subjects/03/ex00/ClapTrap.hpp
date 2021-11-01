#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
   private:
    std::string name_;
    int hitpoints_;
    int energy_points_;
    int attack_damage_;

   public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &other);
    ~ClapTrap();
    
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap &operator=(ClapTrap const &other);
};

#endif