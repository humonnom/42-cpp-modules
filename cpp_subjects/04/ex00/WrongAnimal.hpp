#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
 protected:
  std::string type_;

 public:
  WrongAnimal();
  WrongAnimal(std::string type);
  WrongAnimal(WrongAnimal const& other);
  ~WrongAnimal();

  std::string const& getType() const;
  void makeSound() const;

  WrongAnimal& operator=(WrongAnimal const& other);
};

#endif