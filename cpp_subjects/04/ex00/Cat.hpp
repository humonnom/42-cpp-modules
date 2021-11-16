#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(std::string type);
  Cat(Cat const& other);
  ~Cat();

  void makeSound() const;

  Cat& operator=(Cat const& other);
};

#endif