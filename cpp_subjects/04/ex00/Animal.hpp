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
    virtual void makeSound() const;

    Animal& operator=(Animal const& other);
};

#endif