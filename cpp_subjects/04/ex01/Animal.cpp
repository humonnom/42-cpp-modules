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

// 타입가져오기
std::string const& Animal::getType() const {
  std::cout << "[ Animal class ] get type" << std::endl;
  return type_;
};

// virtual function 가상함수
void Animal::makeSound() const {
  std::cout << "[ Animal class ] 'Unknown animal sound...'" << std::endl;
};

// operator
Animal& Animal::operator=(Animal const& other) {
  std::cout << "[ Animal class ] copy assignment overload" << std::endl;
  if (this != &other) type_ = other.getType();
  return *this;
};