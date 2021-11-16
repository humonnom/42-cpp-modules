#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  std::cout << "[          correct case            ]" << std::endl;
  std::cout << "=========== create all ============" << std::endl;
  //기초클래스의 포인터 -> 기초클래스의 객체
  const Animal* meta = new Animal();
  //기초클래스의 포인터 -> 파생클래스의 객체
  const Animal* j = new Dog("dog");
  const Animal* i = new Cat("cat");

  std::cout << "=========== type check ============" << std::endl;
  meta->getType();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  std::cout << "=========== make sound ============" << std::endl;
  i->makeSound();  // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  std::cout << "=========== delete all ============" << std::endl;
  delete meta;
  delete j;
  delete i;

  std::cout
      << "\n/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\n"
      << std::endl;

  std::cout << "[           wrong case            ]" << std::endl;
  std::cout << "=========== create all ============" << std::endl;
  // 기초클래스의 포인터 -> 기초클래스의 객체
  const WrongAnimal* wrongMeta = new WrongAnimal();
  //기초클래스의 포인터 -> 파생클래스의 객체
  const WrongAnimal* wrongCat = new WrongCat("wrong cat");

  std::cout << "=========== type check ============" << std::endl;
  std::cout << wrongMeta->getType() << " " << std::endl;
  std::cout << wrongCat->getType() << " " << std::endl;

  std::cout << "=========== make sound ============" << std::endl;
  wrongMeta->makeSound();
  wrongCat->makeSound();  // wll output unkown animal sound!

  std::cout << "=========== delete all ============" << std::endl;
  delete wrongMeta;
  delete wrongCat;  // 파생클래스의 소멸자가 실행되지 않음 -> 정적바인딩
}