#include "Cat.hpp"

#include <iostream>
#include <string>

#include "Animal.hpp"

// constructor & destructor
Cat::Cat() : Animal() {
  std::cout << "[ Cat class ] constructor" << std::endl;
};
Cat::Cat(std::string type) : Animal(type) {
  std::cout << "[ Cat class ] constructor" << std::endl;
};
Cat::Cat(Cat const& other) : Animal() {
  std::cout << "[ Cat class ] copy constructor" << std::endl;
  *this = other;
};
Cat::~Cat() { std::cout << "[ Cat class ] destructor" << std::endl; };

void Cat::makeSound() const {
  std::cout << "[ " << type_ << " ] "
            << "Meow... Meow.." << std::endl;
};

// operator
Cat& Cat::operator=(Cat const& other) {
  std::cout << "[ Cat class ] copy assignment overload" << std::endl;
  if (this != &other) type_ = other.getType();
  return *this;
};
