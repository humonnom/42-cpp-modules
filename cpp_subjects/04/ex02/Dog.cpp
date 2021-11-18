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
    brain_ = new Brain();
};
Dog::Dog(Dog const& other) : Animal() {
    std::cout << "[ Dog class ] copy constructor" << std::endl;
    brain_ = new Brain();
    *this = other;
};
Dog::~Dog() {
    delete brain_;
    std::cout << "[ Dog class ] destructor" << std::endl;
};

void Dog::makeSound() const {
    std::cout << "[ " << type_ << " ] "
              << "WOOF! WOOF!" << std::endl;
};

Brain const& Dog::getBrain() const {
    return *brain_;
};

// operator
Dog& Dog::operator=(Dog const& other) {
    std::cout << "[ Dog class ] copy assignment overload" << std::endl;
    if (this != &other) {
        type_ = other.getType();
        delete brain_;
        brain_ = new Brain(other.getBrain());
    };
    return *this;
};
