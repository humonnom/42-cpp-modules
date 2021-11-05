#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
 protected:
  std::string type_;

 public:
  Animal();
  Animal(std::string type);
  Animal(Animal const& other);
  ~Animal();

  Animal& operator=(Animal const& other);

  std::string const& getType() const;
  void setType(std::string const& type);
};

#endif