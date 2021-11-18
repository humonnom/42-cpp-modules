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
    brain_ = new Brain();
};
Cat::Cat(Cat const& other) : Animal() {
    std::cout << "[ Cat class ] copy constructor" << std::endl;
    brain_ = new Brain();
    *this = other;
};
Cat::~Cat() {
    delete brain_;
    std::cout << "[ Cat class ] destructor" << std::endl;
};

void Cat::makeSound() const {
    std::cout << "[ " << type_ << " ] "
              << "Meow... Meow.." << std::endl;
};

Brain const& Cat::getBrain() const {
    return *brain_;
};

// operator
Cat& Cat::operator=(Cat const& other) {
    std::cout << "[ Cat class ] copy assignment overload" << std::endl;
    if (this != &other) {
        type_ = other.getType();
        delete brain_;
        brain_ = new Brain(other.getBrain());
    };
    return *this;
};
