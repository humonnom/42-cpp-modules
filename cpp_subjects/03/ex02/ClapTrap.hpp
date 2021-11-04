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

    //파생클래스에서 기초클래스의 값을 받아오기 위한 set 함수 추가
    std::string const &getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

    //파생클래스에서 기초클래스의 값을 수정하기 위한 set 함수 추가
    void setName(std::string const &name);
    void setHitPoints(unsigned int hit_points);
    void setEnergyPoints(unsigned int energy_points);
    void setAttackDamage(unsigned int attack_damage);
};

#endif