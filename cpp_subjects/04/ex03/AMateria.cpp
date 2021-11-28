#include "AMateria.hpp"

#include <iostream>
#include <string>

#include "ICharacter.hpp"

AMateria::AMateria(std::string const& type) : type_(type) {
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
    return type_;
};

void AMateria::use(ICharacter& target) {
    if (type_ == "ice")
        std::cout << "*shoots an ice bolt at *" << target.getName() << std::endl;
    else if (type_ == "cure")
        std::cout << "*heals " << target.getName() << "'s wounds*" << std::endl;
    else
        std::cout << "*warning! invalid materia!*" << std::endl;
};

// 대입연산자 오버로드
AMateria& AMateria::operator=(AMateria const& other) {
    std::cout << "[ AMateria class ] copy assignment overload" << std::endl;
    if (this != &other) type_ = other.getType();
    return *this;
};