#include "Dog.hpp"

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

// constructor & destructor
Dog::Dog() : Animal() {
    std::cout << "[ Dog class ] constructor" << std::endl;
    brain_ = new Brain();
};

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "[ Dog class ] constructor" << std::endl;
};
Dog::Dog(Dog const& other) : Animal() {
    std::cout << "[ Dog class ] copy constructor" << std::endl;
    *this = other;
};
Dog::~Dog() {
    std::cout << "[ Dog class ] destructor" << std::endl;
    delete brain_;
};

void Dog::makeSound() const {
    std::cout << "[ " << type_ << " ] "
              << "WOOF! WOOF!" << std::endl;
};

// operator
Dog& Dog::operator=(Dog const& other) {
    std::cout << "[ Dog class ] copy assignment overload" << std::endl;
    if (this != &other) {
        type_ = other.getType();
        //brain 깊은 복사
    };
    return *this;
};
