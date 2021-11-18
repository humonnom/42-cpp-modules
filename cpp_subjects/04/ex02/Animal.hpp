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
    virtual ~Animal();

    std::string const& getType() const;
    // 순수 가상 함수이므로 구현하지 않는다.
    virtual void makeSound() const = 0;

    Animal& operator=(Animal const& other);
};

#endif