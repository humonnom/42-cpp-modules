#include "Dog.hpp"

#include <iostream>
#include <string>

#include "Animal.hpp"

// constructor & destructor

Dog::Dog() : Animal() {
  std::cout << "[ Dog class ] constructor" << std::endl;
};
Dog::Dog(std::string type) : Animal(type) {
  std::cout << "[ Dog class ] constructor" << std::endl;
};
Dog::Dog(Dog const& other) : Animal() {
  std::cout << "[ Dog class ] copy constructor" << std::endl;
  *this = other;
};
Dog::~Dog() { std::cout << "[ Dog class ] destructor" << std::endl; };

// operator
Dog& Dog::operator=(Dog const& other) {
  std::cout << "[ Dog class ] copy assignment overload" << std::endl;
  if (this != &other) setType(other.getType());
  return *this;
};

void Dog::makeSound() {
  std::cout << "[ " << type_ << " ] "
            << "WOOF! WOOF!" << std::endl;
};
