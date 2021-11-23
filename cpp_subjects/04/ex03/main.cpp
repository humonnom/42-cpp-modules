#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Cure.hpp"
// #include "ICharacter.hpp"
// #include "IMateriaSource.hpp"
// #include "Ice.hpp"

void printType(AMateria* ptr) {
    std::cout << "it's type is " << ptr->getType() << std::endl;
}

int main() {
    // - 포인터 생성(힙)
    Cure* metPtr = new Cure("cure");
    // - 객체 생성(스택)
    Cure met1("cure");

    // - 복사 생성자
    Cure met2 = met1;
    // - 대입연산자 오버로드
    Cure* metPtr3 = new Cure("invalid");
    // printType(metPtr3);
    *metPtr3 = met1;
    // - clone 함수 사용
    Cure* metPtr2 = metPtr->clone();

    std::cout << "---------- destroy -----------" << std::endl;
    delete metPtr;
    delete metPtr2;

    // - 추상클래스의 객체생성 테스트
    //AMateria materia; // - 객체(인스턴스)는 생성할 수 없음(주석 해제시 에러방출)
    //AMateria* basePtr;  // - pointer는 생성 가능 -> 어떤때 사용하는지? 궁금함

    return 0;
}