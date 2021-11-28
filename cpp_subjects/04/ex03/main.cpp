#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Cure.hpp"
// #include "ICharacter.hpp"
// #include "IMateriaSource.hpp"
// #include "Ice.hpp"

int main() {
    // - 포인터 생성(힙)
    // - 객체 생성(스택)
    // - 복사 생성자
    // - 대입연산자 오버로드
    // - clone 함수 사용

    std::cout << "---------- destroy -----------" << std::endl;

    std::cout << "---------- test zone -----------" << std::endl;
    // - 추상클래스의 객체(인스턴스)는 생성할 수 없음(주석 해제시 에러방출)
    //AMateria materia;

    // - pointer는 생성 및 사용 가능함
    // AMateria* basePtr = new Cure("cure");
    // delete basePtr;

    return 0;
}