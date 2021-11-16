#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
   private:
    Brain* brain_;

   public:
    Dog();
    Dog(std::string type);
    Dog(Dog const& other);
    ~Dog();

    void makeSound() const;

    Dog& operator=(Dog const& other);
};

#endif