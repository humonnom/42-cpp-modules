#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
    // Characters: Q, Data

    // - MateriaSource 클래스 테스트
    // create class
    MateriaSource *box = new MateriaSource();
    // learn material
    Ice icicle("ice");
    Cure potion("cure");
    box->learnMateria(&icicle);
    box->learnMateria(&potion);
    box->learnMateria(&icicle);
    box->learnMateria(&potion);
    box->printMateriaSourceList();

    // create material
    AMateria *something = box->createMateria("ice");
    AMateria *somethingNice = box->createMateria("cure");
    // try to create invalid material type
    AMateria *somethingInvalid = box->createMateria("invalid type");  // nothing should happen
    std::cout << somethingInvalid << std::endl;                       // should print 0x0

    // - Character 클래스 테스트
    Character *q = new Character("Q");
    Character *data = new Character("Data");

    std::cout
        << "---------- play -----------" << std::endl;
    q->equip(something);      // save weapon
    q->equip(somethingNice);  // save weapon
    q->equip(something);      // save weapon
    q->equip(something);      // save weapon
    q->equip(something);      // save weapon
    q->printMList();          // should have four weapons
    q->unequip(2);            // should delete third one
    q->unequip(6);            // invalid number -> should do nothing
    q->printMList();          // should have three weapon
    q->use(0, *data);         // ice
    q->use(1, *data);         // cure

    Character *copy = new Character(*q);
    copy->printMList();  // should have three weapon
    q->unequip(2);       // should delete ice(the last one)
    copy->printMList();  // should have three weapon
    q->printMList();     // should have two weapon
    copy->use(1, *q);    // should work

    std::cout
        << "---------- destroy -----------" << std::endl;
    //delete characters
    delete q;
    delete data;
    delete copy;

    // delete materials
    delete somethingNice;
    delete something;

    // delete material box
    delete box;

    std::cout << "---------- test zone -----------" << std::endl;
    // - 추상클래스의 객체(인스턴스)는 생성할 수 없음(주석 해제시 에러방출)
    //AMateria materia;

    // - pointer는 생성 및 사용 가능함
    // AMateria* basePtr = new Cure("cure");
    // delete basePtr;

    // while (1)
    //     ;
    return 0;
}