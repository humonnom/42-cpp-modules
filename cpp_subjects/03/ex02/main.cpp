#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void printPartMsg(std::string const& msg) {
    std::cout << std::endl
              << "||--------------------- " << msg << " ----------------------||" << std::endl
              << std::endl;
}

void printScavTrapInfo(ScavTrap const& target) {
    std::cout << "=== [" << target.getName() << "] ===" << std::endl;
    std::cout << "Hit Points: " << target.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << target.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << target.getAttackDamage() << std::endl
              << std::endl;
};
void printFragTrapInfo(FragTrap const& target) {
    std::cout << "=== [" << target.getName() << "] ===" << std::endl;
    std::cout << "Hit Points: " << target.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << target.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << target.getAttackDamage() << std::endl
              << std::endl;
};

int main() {
    printPartMsg("CREATE");
    FragTrap picard("picard");
    FragTrap janeway;
    janeway.setName("janeway");

    printPartMsg("CHECK ");
    printFragTrapInfo(picard);
    printFragTrapInfo(janeway);

    printPartMsg(" PLAY ");
    picard.attack(janeway.getName());
    janeway.takeDamage(picard.getAttackDamage());

    picard.highFivesGuys();
    janeway.highFivesGuys();

    printPartMsg("DELETE");

    return 0;
}