#include "Cat.hpp"

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

// constructor & destructor
Cat::Cat() : Animal() {
    std::cout << "[ Cat class ] constructor" << std::endl;
    brain_ = new Brain();
};
Cat::Cat(std::string type) : Animal(type) {
    std::cout << "[ Cat class ] constructor" << std::endl;
};
Cat::Cat(Cat const& other) : Animal() {
    std::cout << "[ Cat class ] copy constructor" << std::endl;
    *this = other;
};
Cat::~Cat() {
    std::cout << "[ Cat class ] destructor" << std::endl;
    delete brain_;
};

void Cat::makeSound() const {
    std::cout << "[ " << type_ << " ] "
              << "Meow... Meow.." << std::endl;
};

// operator
Cat& Cat::operator=(Cat const& other) {
    std::cout << "[ Cat class ] copy assignment overload" << std::endl;
    if (this != &other) {
        type_ = other.getType();
        //brain 깊은 복사
    };
    return *this;
};
