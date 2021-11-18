#include "AMateria.hpp"

#include <iostream>
#include <string>

AMateria::AMateria(std::string const& type) {
    std::cout << "[ AMateria class ] constructor" << std::endl;
};

AMateria::AMateria(AMateria const& other) {
    std::cout << "[ AMateria class ] copy constructor" << std::endl;
    *this = other;
};

AMateria::~AMateria() {
    std::cout << "[ AMateria class ] destructor" << std::endl;
};

std::string const& AMateria::getType() const {
    std::cout << "[ AMateria class ] get type" << std::endl;
    return type_;
};

//Returns the materia type
void AMateria::use(ICharacter& target) {
    std::cout << "[ AMateria class ] use" << std::endl;
};

// 대입연산자 오버로드
AMateria& AMateria::operator=(AMateria const& other) {
    std::cout << "[ AMateria class ] copy assignment overload" << std::endl;
    if (this != &other) type_ = other.getType();
    return *this;
};