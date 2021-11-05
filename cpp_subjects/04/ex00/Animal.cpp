#include "Animal.hpp"

#include <iostream>
#include <string>
// constructor & destructor

Animal::Animal() : type_("") {
  std::cout << "[ Animal class ] constructor" << std::endl;
};
Animal::Animal(std::string type) : type_(type) {
  std::cout << "[ Animal class ] constructor" << std::endl;
};
Animal::Animal(Animal const& other) {
  std::cout << "[ Animal class ] copy constructor" << std::endl;
  *this = other;
};
Animal::~Animal() { std::cout << "[ Animal class ] destructor" << std::endl; };

// operator
Animal& Animal::operator=(Animal const& other) {
  std::cout << "[ Animal class ] copy assignment overload" << std::endl;
  if (this != &other) setType(other.getType());
  return *this;
};

std::string const& Animal::getType() const {
  std::cout << "[ Animal class ] get type" << std::endl;
  return type_;
};
void Animal::setType(std::string const& type) {
  std::cout << "[ Animal class ] set type [" << type_ << "] -> [ " << type
            << " ]" << std::endl;
  type_ = type;
};