#include <iostream>

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void printPartMsg(std::string const& msg) {
  std::cout << std::endl
            << "||--------------------- " << msg << "---------------------- ||"
            << std::endl
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
void printDiamondTrapInfo(DiamondTrap const& target) {
  std::cout << "=== [ DiamondTrap Info ] ===" << std::endl;
  std::cout << "Hit Points: " << target.getHitPoints() << std::endl;
  std::cout << "Energy Points: " << target.getEnergyPoints() << std::endl;
  std::cout << "Attack Damage: " << target.getAttackDamage() << std::endl
            << std::endl;
};

int main() {
  printPartMsg("TEST");

  FragTrap test;
  // std::cout << test.getName() << std::endl;
  test.highFivesGuys();

  printPartMsg("CREATE");
  DiamondTrap picard;
  DiamondTrap janeway("janeway");

  printPartMsg("CHECK ");

  std::cout << "초기화 체크" << std::endl;
  printDiamondTrapInfo(picard);
  printDiamondTrapInfo(janeway);

  std::cout << "whoAmI 함수 체크" << std::endl;
  picard.whoAmI();
  janeway.whoAmI();

  // hit points, Attack damage => Fragtrap
  // energy points, attck => Scavtrap

  std::cout << "getName 함수로 이름을 가져오면? => ClapTrap의 이름이 리턴됨"
            << std::endl;
  std::cout << picard.getName() << std::endl;

  std::cout << "setName 함수를 쓰면? => ClapTrap의 이름이 바뀝니다"
            << std::endl;
  picard.setName("picard");
  picard.whoAmI();
  std::cout << "setName 함수를 썼을때 DiamondTrap의 이름을 바꾸고 싶으면?\n"
               "=> setName()함수를 오버라이딩 해야함"
            << std::endl;

  // printFragTrapInfo(picard);
  // printFragTrapInfo(janeway);

  printPartMsg(" PLAY ");
  std::cout << janeway.FragTrap::getAttackDamage() << std::endl;
  // picard.attack(janeway.getName());
  // janeway.takeDamage(picard.getAttackDamage());

  // picard.highFivesGuys();
  // janeway.highFivesGuys();

  printPartMsg("DELETE");

  return 0;
}