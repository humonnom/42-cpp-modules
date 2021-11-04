#include <iostream>

#include "ClapTrap.hpp"
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

int main() {
    printPartMsg("CREATE");
    ScavTrap picard("picard");   // 기초클래스 객체 생성 후 파생클래스 객체 picard 생성
    ScavTrap janeway;            // 기초클래스 객체 생성 후 파생클래스 객체 janeway 생성
    janeway.setName("janeway");  // janeway의 객체 이름 "janeway"로 지정 -> 기초클래스의 퍼블릭 함수 사용

    printPartMsg("CHECK ");
    printScavTrapInfo(picard);
    printScavTrapInfo(janeway);
    janeway.setAttackDamage(50);
    janeway.beRepaired(51);
    janeway.beRepaired(20);

    picard = janeway;  // 대입연산자 오버로드
    printScavTrapInfo(picard);
    picard.setName("picard");

    printPartMsg(" PLAY ");
    picard.attack(janeway.getName());              // attack: 재정의 된 파생클래스 객체의 퍼블릭 함수
    janeway.takeDamage(picard.getAttackDamage());  // getAttackDamage: 기초클래스의 퍼블릭 함수
    janeway.beRepaired(5);

    janeway.guardGate();

    printPartMsg("DELETE");

    return 0;
}