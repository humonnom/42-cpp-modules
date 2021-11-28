#include "AMateria.hpp"

#include <iostream>
#include <string>

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
    std::cout << "it's type is " << type_ << std::endl;
    return type_;
};

//Returns the materia type
// void AMateria::use(ICharacter& target) {
//     std::cout << "[ AMateria class ] use" << std::endl;
// };
void AMateria::use(std::string const& name) {
    if (type_ == "ice")
        std::cout << "*shoots an ice bolt at *" << name << std::endl;
    else if (type_ == "cure")
        std::cout << "*heals " << name << "'s wounds*" << std::endl;
    else
        std::cout << "*warning! invalid materia!*" << std::endl;
};

// 대입연산자 오버로드
AMateria& AMateria::operator=(AMateria const& other) {
    std::cout << "[ AMateria class ] copy assignment overload" << std::endl;
    if (this != &other) type_ = other.getType();
    return *this;
};