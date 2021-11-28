#include "Ice.hpp"

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "[ Ice class ] constructor" << std::endl;
};

Ice::Ice(std::string const& type) : AMateria(type) {
    std::cout << "[ Ice class ] constructor" << std::endl;
};

Ice::Ice(Ice const& other) : AMateria("undefined") {
    std::cout << "[ Ice class ] copy constructor" << std::endl;
    *this = other;
};

Ice::~Ice() {
    std::cout << "[ Ice class ] destructor" << std::endl;
};

Ice* Ice::clone() const {
    return new Ice(type_);
};

void Ice::use(ICharacter& target) {
    AMateria::use(target);
};

// 대입연산자 오버로드
Ice& Ice::operator=(Ice const& other) {
    std::cout << "[ Ice class ] copy assignment overload" << std::endl;
    if (this != &other) type_ = other.getType();
    return *this;
};