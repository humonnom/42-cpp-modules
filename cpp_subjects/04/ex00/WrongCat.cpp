#include "WrongCat.hpp"

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

// constructor & destructor

WrongCat::WrongCat() : WrongAnimal() {
  std::cout << "[ WrongCat class ] constructor" << std::endl;
};
WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
  std::cout << "[ WrongCat class ] constructor" << std::endl;
};
WrongCat::WrongCat(WrongCat const& other) : WrongAnimal() {
  std::cout << "[ WrongCat class ] copy constructor" << std::endl;
  *this = other;
};
WrongCat::~WrongCat() {
  std::cout << "[ WrongCat class ] destructor" << std::endl;
};

void WrongCat::makeSound() const {
  std::cout << "[ " << type_ << " ] "
            << "Meow... Meow.." << std::endl;
};

// operator
WrongCat& WrongCat::operator=(WrongCat const& other) {
  std::cout << "[ WrongCat class ] copy assignment overload" << std::endl;
  if (this != &other) type_ = other.getType();
  return *this;
};
