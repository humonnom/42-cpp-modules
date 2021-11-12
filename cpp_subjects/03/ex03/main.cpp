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
    // virtual로 상속할 경우 일어나는 일: 하나씩 따로 만들때는 다른 게 없음.
    // FragTrap, ScavTrap 각각 ClapTrap을 생성함.
    // printPartMsg("VIRTUAL KEYWOARD TEST");
    // FragTrap test("fragtrap_test");
    // test.highFivesGuys();
    // ScavTrap test2;
    // test2.guardGate();

    printPartMsg("CREATE");
    DiamondTrap picard;
    DiamondTrap janeway("janeway");

    printPartMsg("CHECK ");
    std::cout << "[초기화 체크]" << std::endl;
    printDiamondTrapInfo(picard);
    printDiamondTrapInfo(janeway);
    // hit points, Attack damage => Fragtrap
    // energy points, attck => Scavtrap
    // 초기화의 결과: 문서에서 시킨대로 하면 attack damage 20이 나오는 이유 설명하기

    std::cout << "[whoAmI 함수 체크]" << std::endl;
    picard.whoAmI();
    janeway.whoAmI();

    // name을 오버라이딩 했기 때문에 생기는 현상임
    std::cout << "\n[setName 함수사용 결과 체크]" << std::endl;
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

    printPartMsg("DELETE");

    return 0;
}