#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
// #include "IMateriaSource.hpp"

int main() {
    // - Character 생성(힙)
    Character *jueun = new Character("Jueun");
    // - materia 생성(힙)
    AMateria *ice = new Ice("ice");
    // - 복사 생성자
    jueun->equip(ice);
    std::cout << jueun->getMNum() << std::endl;

    // - 대입연산자 오버로드

    // - clone 함수 사용

    std::cout << "---------- destroy -----------" << std::endl;
    delete jueun;
    delete ice;

    std::cout << "---------- test zone -----------" << std::endl;
    // - 추상클래스의 객체(인스턴스)는 생성할 수 없음(주석 해제시 에러방출)
    //AMateria materia;

    // - pointer는 생성 및 사용 가능함
    // AMateria* basePtr = new Cure("cure");
    // delete basePtr;

    return 0;
}