#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
   private:
    std::string name_;
    unsigned int hit_points_;
    unsigned int energy_points_;
    unsigned int attack_damage_;

   public:
    ClapTrap();
    ClapTrap(std::string const &name);
    ClapTrap(ClapTrap const &other);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap const &other);

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string &getName();
    unsigned int getAttackDamage();
};

#endif