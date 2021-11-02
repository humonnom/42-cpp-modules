#include <iostream>

#include "ClapTrap.hpp"

int main() {
    //---------------------CREATE----------------------//
    // constructor(with name)
    ClapTrap picard("Jean-Luc Picard");
    // constructor(without name)
    ClapTrap janeway;
    // copy assignment operator
    janeway = ClapTrap("Janeway");  // 임시객체 소멸
    // copy constructor(use copy assignment operator)
    ClapTrap who_am_i(janeway);

    //---------------------PLAY!-----------------------//
    picard.attack(janeway.getName());
    janeway.takeDamage(picard.getAttackDamage());

    picard.attack(who_am_i.getName());
    who_am_i.takeDamage(picard.getAttackDamage());

    //--------------------DESTROY----------------------//
    return 0;
}