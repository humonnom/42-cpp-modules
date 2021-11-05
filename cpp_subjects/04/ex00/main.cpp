#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  std::cout << "[          correct case            ]" << std::endl;
  std::cout << "=========== create all ============" << std::endl;
  Animal unknown_animal("unknown_animal");
  Dog dog("dog");
  Cat cat("cat");

  std::cout << "=========== type check ============" << std::endl;
  std::cout << unknown_animal.getType() << std::endl;
  std::cout << dog.getType() << std::endl;
  std::cout << cat.getType() << std::endl;

  std::cout << "=========== make sound ============" << std::endl;

  // unkown_animal.makeSound(); // -->  error (Animal 클래스는 makeSound)
  dog.makeSound();
  cat.makeSound();

  std::cout << "=========== delete all ============" << std::endl;

  // std::cout << "[           wrong case            ]" << std::endl;
}