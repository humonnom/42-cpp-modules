#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

// constructor & destructor
WrongAnimal::WrongAnimal() : type_("") {
  std::cout << "[ WrongAnimal class ] constructor" << std::endl;
};
WrongAnimal::WrongAnimal(std::string type) : type_(type) {
  std::cout << "[ WrongAnimal class ] constructor" << std::endl;
};
WrongAnimal::WrongAnimal(WrongAnimal const& other) {
  std::cout << "[ WrongAnimal class ] copy constructor" << std::endl;
  *this = other;
};
WrongAnimal::~WrongAnimal() {
  std::cout << "[ WrongAnimal class ] destructor" << std::endl;
};

// 타입가져오기
std::string const& WrongAnimal::getType() const {
  std::cout << "[ WrongAnimal class ] get type" << std::endl;
  return type_;
};

// virtual function 가상함수
void WrongAnimal::makeSound() const {
  std::cout << "[ WrongAnimal class ] 'Unknown animal sound...'" << std::endl;
};

// operator
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& other) {
  std::cout << "[ WrongAnimal class ] copy assignment overload" << std::endl;
  if (this != &other) type_ = other.getType();
  return *this;
};