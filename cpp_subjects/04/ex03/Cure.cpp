#include "Cure.hpp"

#include <iostream>
#include <string>

#include "AMateria.hpp"

Cure::Cure(std::string const& type) : AMateria(type) {
    std::cout << "[ Cure class ] constructor" << std::endl;
};

Cure::Cure(Cure const& other) : AMateria("") {
    std::cout << "[ Cure class ] copy constructor" << std::endl;
    *this = other;
};

Cure::~Cure() {
    std::cout << "[ Cure class ] destructor" << std::endl;
};

Cure* Cure::clone() const {
    return new Cure("cure");
};

// 대입연산자 오버로드
Cure& Cure::operator=(Cure const& other) {
    std::cout << "[ Cure class ] copy assignment overload" << std::endl;
    if (this != &other) type_ = other.getType();
    return *this;
};